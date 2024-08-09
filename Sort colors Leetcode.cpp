//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
//You must solve this problem without using the library's sort function.

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0;
        int white=0;
        int blue=0;
        int size = nums.size();
        for(int i=0; i<size; i++)  {
            if(nums[i]==0)red++;
            else if(nums[i]==1)white++;
            else blue++;
        }
        //optimised??
        for(int i=0; i<red; i++)  {
            nums[i]=0;
        }
        for(int i=red; i<size-blue; i++)  {
            nums[i]=1;
        }
        for(int i=size-blue; i<size; i++)  {
            nums[i]=2;
        }
    }
};
