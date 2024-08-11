// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the the array follows the given conditions:

//  1.   Every consecutive pair of integers have opposite signs.
//  2.   For all integers with the same sign, the order in which they were present in nums is preserved.
//  3.   The rearranged array begins with a positive integer.

// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg=1; 
        int size = nums.size();
        int arr[size];
        for(int i=0; i<size; i++)  {
            arr[i] = nums[i];
        }
        for(int i=0; i<size; i++)  {
            if(arr[i]>0)  {
                nums[pos] = arr[i];
                pos+=2;
            }else{
                nums[neg] = arr[i];
                neg+=2;
            }
        }
        
    return nums;
    }
};
