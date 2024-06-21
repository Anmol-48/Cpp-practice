//You have a browser of one tab where you start on the homepage and you can visit another url, get back in the history number of steps or move forward in the history number of steps.
//
//Implement the BrowserHistory class:
//
//BrowserHistory(string homepage) Initializes the object with the homepage of the browser.
//void visit(string url) Visits url from the current page. It clears up all the forward history.
//string back(int steps) Move steps back in history. If you can only return x steps in the history and steps > x, you will return only x steps. Return the current url after moving back in history at most steps.
//string forward(int steps) Move steps forward in history. If you can only forward x steps in the history and steps > x, you will forward only x steps. Return the current url after forwarding in history at most steps.
// 
//
//Example:
//
//Input:
//["BrowserHistory","visit","visit","visit","back","back","forward","visit","forward","back","back"]
//[["leetcode.com"],["google.com"],["facebook.com"],["youtube.com"],[1],[1],[1],["linkedin.com"],[2],[2],[7]]
//Output:
//[null,null,null,null,"facebook.com","google.com","facebook.com",null,"linkedin.com","google.com","leetcode.com"]
//
//Explanation:
//BrowserHistory browserHistory = new BrowserHistory("leetcode.com");
//browserHistory.visit("google.com");       // You are in "leetcode.com". Visit "google.com"
//browserHistory.visit("facebook.com");     // You are in "google.com". Visit "facebook.com"
//browserHistory.visit("youtube.com");      // You are in "facebook.com". Visit "youtube.com"
//browserHistory.back(1);                   // You are in "youtube.com", move back to "facebook.com" return "facebook.com"
//browserHistory.back(1);                   // You are in "facebook.com", move back to "google.com" return "google.com"
//browserHistory.forward(1);                // You are in "google.com", move forward to "facebook.com" return "facebook.com"
//browserHistory.visit("linkedin.com");     // You are in "facebook.com". Visit "linkedin.com"
//browserHistory.forward(2);                // You are in "linkedin.com", you cannot move forward any steps.
//browserHistory.back(2);                   // You are in "linkedin.com", move back two steps to "facebook.com" then to "google.com". return "google.com"
//browserHistory.back(7);                   // You are in "google.com", you can move back only one step to "leetcode.com". return "leetcode.com"



#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class BrowserHistory{
	vector<string> s;
	int pos;
	public:
		BrowserHistory(string homepage){
			s.push_back(homepage);
			pos=0;
			cout<<"null ";
		}
		
		void visit(string url){
			if(pos==s.size()-1){
				s.push_back(url);
				pos=s.size()-1;	
				cout<<" null ";
			}
			else{
				s.push_back(url);
				for(int j=s.size()-1;j>pos+1;j--){
					s[j]=s[j-1];
				}
				s[pos+1]=url;
				pos=pos+1;
				cout<<" null ";
			}		
		}
		
		string back(int steps){
			if(pos-steps<0){
				return s[0];
			}
			pos=pos-steps;
			return s[pos];
		}
		
		string forward(int steps){
			pos=pos+steps;
			return s[pos];
		}
};

int main()
{
	string st[]={"BrowserHistory","visit","visit","visit","back","back","forward","visit","forward","back","back"};
	string pg[]={"leetcode.com","google.com","facebook.com","youtube.com","1","1","1","linkedin.com","2","2","7"};
	BrowserHistory *obj=new BrowserHistory(pg[0]);
		
		
	int n,val;
	n=sizeof(st)/sizeof(st[0]);
	
	for(int i=1;i<n;i++){
		if(st[i]=="visit"){
			obj->visit(pg[i]);
			if(st[i+1]=="forward"){
				cout<<pg[i]<<" ";
				i=i+1;
			}
		}
		else if(st[i]=="back"){
			
			val=int((pg[i])[0]-'0');
			cout<<obj->back(val)<<" ";
		}
		else if(st[i]=="forward"){
			val=int((pg[i])[0]-'0');
			cout<<obj->forward(val)<<" ";
		}
		
	}
		
		
	//cout<<endl<<(pg[10])[0]-48;
	return 0;
}