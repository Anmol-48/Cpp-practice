//We build a table of n rows (1-indexed). We start by writing 0 in the 1st row. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10.
//
//For example, for n = 3, the 1st row is 0, the 2nd row is 01, and the 3rd row is 0110.
//Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.
//
// 
//
//Example 1:
//
//Input: n = 1, k = 1
//Output: 0
//Explanation: row 1: 0
//Example 2:
//
//Input: n = 2, k = 1
//Output: 0
//Explanation: 
//row 1: 0
//row 2: 01


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        // Base case: the first element in the first row is 0
        if (n == 1) {
            return 0;
        }

        // Find the length of the row (which is 2^(n-1))
        int mid = (1 << (n - 1)) / 2;

        // If k is in the first half, it's the same as the k-th element in the previous row
        if (k <= mid) {
            return kthGrammar(n - 1, k);
        } else {
            // If k is in the second half, it's the complement of the (k-mid)-th element in the previous row
            return !kthGrammar(n - 1, k - mid);
        }
    }
};


int main()
{
	Solution obj;
	cout<<obj.kthGrammar(30,434991989);
	return 0;
}