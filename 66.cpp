//You are given two 2D integer arrays, items1 and items2, representing two sets of items. Each array items has the following properties:
//
//items[i] = [valuei, weighti] where valuei represents the value and weighti represents the weight of the ith item.
//The value of each item in items is unique.
//Return a 2D integer array ret where ret[i] = [valuei, weighti], with weighti being the sum of weights of all items with value valuei.
//
//Note: ret should be returned in ascending order by value.
//
// 
//
//Example 1:
//
//Input: items1 = [[1,1],[4,5],[3,8]], items2 = [[3,1],[1,5]]
//Output: [[1,6],[3,9],[4,5]]
//Explanation: 
//The item with value = 1 occurs in items1 with weight = 1 and in items2 with weight = 5, total weight = 1 + 5 = 6.
//The item with value = 3 occurs in items1 with weight = 8 and in items2 with weight = 1, total weight = 8 + 1 = 9.
//The item with value = 4 occurs in items1 with weight = 5, total weight = 5.  
//Therefore, we return [[1,6],[3,9],[4,5]].




#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int check(vector<vector<int> >& res, int target) {
        for (int i = 0; i < res.size(); i++) {
            if (res[i][0] == target) {
                return i; 
            }
        }
        return -1;
    }

    vector<vector<int> > mergeSimilarItems(vector<vector<int> >& items1, vector<vector<int> >& items2) {
        vector<vector<int> > ans;

        // Merging items1
        for (int i = 0; i < items1.size(); i++) {
            int ch = check(ans, items1[i][0]);
            if (ch != -1) {
                ans[ch][1] += items1[i][1];
            } else {
                ans.push_back(items1[i]);
            }
        }
	
        // Merging items2
        for (int i = 0; i < items2.size(); i++) {
            int ch = check(ans, items2[i][0]);
            if (ch != -1) {
                ans[ch][1] += items2[i][1];
            } else {
                ans.push_back(items2[i]);
            }
        }
		
		int min,pos;
		vector<int> temp;
		for (int i = 0; i < ans.size(); i++) {
            min = ans[i][0];
            pos = i;

            for (int j = i + 1; j < ans.size(); j++) {
                if (ans[j][0] < min) {
                    min = ans[j][0];
                    pos = j;
                }
            }

            if (pos != i) {
                temp = ans[i];
                ans[i] = ans[pos];
                ans[pos] = temp;
            }
        }
        
        return ans;
    }
};

int main() {
    vector<vector<int> > a;
    Solution obj;
    
    
     vector<vector<int> > items1;
    items1.push_back(vector<int>(2, 0)); items1[0][0] = 1; items1[0][1] = 1;
    items1.push_back(vector<int>(2, 0)); items1[1][0] = 4; items1[1][1] = 5;
    items1.push_back(vector<int>(2, 0)); items1[2][0] = 3; items1[2][1] = 8;
    
    vector<vector<int> > items2;
    items2.push_back(vector<int>(2, 0)); items2[0][0] = 3; items2[0][1] = 1;
    items2.push_back(vector<int>(2, 0)); items2[1][0] = 1; items2[1][1] = 5;
    
    
    a = obj.mergeSimilarItems(items1, items2);

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
