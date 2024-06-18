//The school cafeteria offers circular and square sandwiches at lunch break, referred to by numbers 0 and 1 respectively. All students stand in a queue. Each student either prefers square or circular sandwiches.
//
//The number of sandwiches in the cafeteria is equal to the number of students. The sandwiches are placed in a stack. At each step:
//
//If the student at the front of the queue prefers the sandwich on the top of the stack, they will take it and leave the queue.
//Otherwise, they will leave it and go to the queue's end.
//This continues until none of the queue students want to take the top sandwich and are thus unable to eat.
//
//You are given two integer arrays students and sandwiches where sandwiches[i] is the type of the i??????th sandwich in the stack (i = 0 is the top of the stack) and students[j] is the preference of the j??????th student in the initial queue (j = 0 is the front of the queue). Return the number of students that are unable to eat.
//
// 
//
//Example 1:
//
//Input: students = [1,1,0,0], sandwiches = [0,1,0,1]
//Output: 0 
//Explanation:
//- Front student leaves the top sandwich and returns to the end of the line making students = [1,0,0,1].
//- Front student leaves the top sandwich and returns to the end of the line making students = [0,0,1,1].
//- Front student takes the top sandwich and leaves the line making students = [0,1,1] and sandwiches = [1,0,1].
//- Front student leaves the top sandwich and returns to the end of the line making students = [1,1,0].
//- Front student takes the top sandwich and leaves the line making students = [1,0] and sandwiches = [0,1].
//- Front student leaves the top sandwich and returns to the end of the line making students = [0,1].
//- Front student takes the top sandwich and leaves the line making students = [1] and sandwiches = [1].
//- Front student takes the top sandwich and leaves the line making students = [] and sandwiches = [].
//Hence all students are able to eat.





#include<iostream>
using namespace std;

int main()
{
	int st[]={1,1,0,0};
	int sn[]={0,1,0,1};
	
	int top,n1,n2,k,temp,f,l;
	int i,j;
	
	top=0;
	k=0;
	
	n1=sizeof(st)/sizeof(st[0]);
	n2=sizeof(sn)/sizeof(sn[0]);

	for(i=top;i<n2;i++){
		f=0;
		for(j=k;j<n1;j++)
		{
			if(sn[top]==st[k]){
				k=k+1;
				top=top+1;
				f=1;
				break;
			}
			else{
				temp=st[k];
				for(l=k;l<=n1-2;l++){
					st[l]=st[l+1];
				}
				st[n1-1]=temp;
			}
		}
		if(f==0){
			cout<<n2-top;
			break;
		}
	}
	
	if(f==1)
	cout<<"0";
	return 0;
}