class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        //sum of n natural nums
        int pervSum=0;
        for(int i=0; i<size; i++)  {
            pervSum+=nums[i];
        }
        
        int sum = (size*(size+1))/2;
        if(sum==pervSum) return 0;
        return sum-pervSum;
    }
};
