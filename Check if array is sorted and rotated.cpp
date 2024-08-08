class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        bool flg = true;
        int i=0;
        for(i=0; i<size-1; i++)  {
            if(nums[i]<=nums[i+1])  {
                continue;
            }else{
                if(i+1 == size-1){
                    if(nums[i+1] <= nums[0]) return true;
                    else return false;
                }
                for(int j=i+1; j<size-1; j++)  {
                    if(nums[j]<=nums[j+1] && nums[0] >= nums[j+1]){
                        continue;
                    }else{
                        return false;
                    }
                }
                
                return true;

            }
        }
        return true;
    }
};
