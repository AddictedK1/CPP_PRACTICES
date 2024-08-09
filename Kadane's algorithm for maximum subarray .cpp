//Given an integer array nums, find the subarray with the largest sum, and return its sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int currSum=0;
        int maxSum=INT_MIN;
        for(int i=0; i<size; i++)  {
            currSum+=nums[i];
            if(currSum>maxSum)  {
                maxSum=currSum;
            }
            if(currSum < 0) currSum = 0;
        }
        return maxSum;
    }
};
