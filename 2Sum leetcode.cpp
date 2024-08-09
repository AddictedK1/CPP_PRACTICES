//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> ans;
        int i=0;
        int j=0;
        while(i<size-1)  {
            j=i+1;
            while(j<size)  {
                if(nums[i]+nums[j]==target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
                j++;
            }
            i++;
        }
    return ans;
    }
};
