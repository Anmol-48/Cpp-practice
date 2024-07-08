//Design a stack that supports increment operations on its elements.
//
//Implement the CustomStack class:
//
//CustomStack(int maxSize) Initializes the object with maxSize which is the maximum number of elements in the stack.
//void push(int x) Adds x to the top of the stack if the stack has not reached the maxSize.
//int pop() Pops and returns the top of the stack or -1 if the stack is empty.
//void inc(int k, int val) Increments the bottom k elements of the stack by val. If there are less than k elements in the stack, increment all the elements in the stack.
// 
//
//Example 1:
//
//Input
//["CustomStack","push","push","pop","push","push","push","increment","increment","pop","pop","pop","pop"]
//[[3],[1],[2],[],[2],[3],[4],[5,100],[2,100],[],[],[],[]]
//Output
//[null,null,null,2,null,null,null,null,null,103,202,201,-1]
//Explanation
//CustomStack stk = new CustomStack(3); // Stack is Empty []
//stk.push(1);                          // stack becomes [1]
//stk.push(2);                          // stack becomes [1, 2]
//stk.pop();                            // return 2 --> Return top of the stack 2, stack becomes [1]
//stk.push(2);                          // stack becomes [1, 2]
//stk.push(3);                          // stack becomes [1, 2, 3]
//stk.push(4);                          // stack still [1, 2, 3], Do not add another elements as size is 4
//stk.increment(5, 100);                // stack becomes [101, 102, 103]
//stk.increment(2, 100);                // stack becomes [201, 202, 103]
//stk.pop();                            // return 103 --> Return top of the stack 103, stack becomes [201, 202]
//stk.pop();                            // return 202 --> Return top of the stack 202, stack becomes [201]
//stk.pop();                            // return 201 --> Return top of the stack 201, stack becomes []
//stk.pop();                            // return -1 --> Stack is empty return -1.



#include<iostream>
#include<vector>
using namespace std;

class CustomStack {
public:
    vector<int> st;
    int top,size;
    CustomStack(int maxSize) {
        size=maxSize;
        top=-1;
    }
    
    void push(int x) {
        if(top+1<=size-1){
            top=top+1;
            st.push_back(x);
        }
    }
    
    int pop() {
        if(top>=0)
        {
            int temp=st[top];
            top=top-1;
            st.pop_back();
            return temp;
        }
        else{
            return -1;
        }
    }
    
    void increment(int k, int val) {
        if(k>(st.size()))
        {
            k=st.size()-1;
        }
        else{
            k=k-1;
        }
        for(int i=0;i<=k;i++)
        {
            st[i]=st[i]+val;
        }
    }
};

int main()
{
	CustomStack obj(4);
	obj.push(1);
	cout<<obj.pop()<<" ";
	
	obj.push(3);
	obj.push(5);
	obj.increment(2,3);
	
	cout<<obj.pop()<<" ";
	cout<<obj.pop();
	return 0;
}