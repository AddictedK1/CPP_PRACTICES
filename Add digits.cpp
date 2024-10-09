// leetcode -----> https://leetcode.com/problems/add-digits/

class Solution {
public:
    int addDigits(int num) {
        if(num/10 == 0) return num;
        int newNum = num;
        int sum;
        while(newNum / 10 != 0)  {
            sum=0;
            while(newNum != 0)  {
                sum+=(newNum%10);
                newNum/=10;
            }
            newNum=sum;
        }
        return newNum;
    }
};
