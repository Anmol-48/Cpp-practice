#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int arr[]={3,2,4};
	int target=6;
	int n=sizeof(arr)/sizeof(arr[0]);
	int left,a,b;
	
	vector<int> ans;
	for(int i=0;i<n;i++){
		ans.push_back(arr[i]);
	}
	
	cout<<endl;
	for(int i=0;i<n;i++){
		a=i;
		left=target-ans[a];
		if(find(ans.begin(),ans.end(),left)!=ans.end()){
			b=distance(ans.begin(),find(ans.begin(),ans.end(),left));
			if(a!=b)
			break;
		}
	}
	
	cout<<"Answer= ["<<a<<","<<b<<"]";
	
	return 0;
}