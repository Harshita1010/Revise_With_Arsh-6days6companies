#include<iostream>
using namespace std;


class Solution {
public:
    int maxRotateFunction(vector<int>& nums) 
    {
        int n=nums.size();
        int high=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
                sum += (j * nums[j]);
            } 
             swap(nums[0],nums[n-1]);
             for(int k=1;k<n-1;k++)
             {
                 swap(nums[k],nums[n-1]);
             }
             if(sum>=high)
             {
                 high=sum;
             }

        }
        return high;
    }
};