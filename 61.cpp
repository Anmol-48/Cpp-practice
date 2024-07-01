//leetcode


//Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
//
//The overall run time complexity should be O(log (m+n)).
//
// 
//
//Example 1:
//
//Input: nums1 = [1,3], nums2 = [2]
//Output: 2.00000
//Explanation: merged array = [1,2,3] and median is 2.
//Example 2:
//
//Input: nums1 = [1,2], nums2 = [3,4]
//Output: 2.50000
//Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.




class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1,n2,n,a,b;
        double ans;
        vector<int> res;
        n1=nums1.size();
        n2=nums2.size();
        n=n1+n2;
        a=0;
        b=0;
        for(int i=0;i<n;i++)
        {
            if(a==n1){
                res.push_back(nums2[b]);
                b=b+1;
            }
            else if(b==n2){
                res.push_back(nums1[a]);
                a=a+1;
            }
            else{
                if(nums1[a]<nums2[b]){
                    res.push_back(nums1[a]);
                    a=a+1;
                }
                else{
                    res.push_back(nums2[b]);
                    b=b+1;
                }
            }
        }
        if(n%2!=0)
        {
            ans=res[(n-1)/2];
            return ans;
        }
        else{
            ans=res[(n-1)/2]+res[((n-1)/2)+1];
            ans=ans/2;
            return ans;
        }
    }
};