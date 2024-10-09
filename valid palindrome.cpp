// leetcode ---> https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        string newStr;
        for(char ch : s)  {
            if(ch >= 'A' && ch<='Z')  {
                newStr+= ch+32;
            }else if(ch >= 'a' && ch<='z')  {
                newStr+=ch;
            }else if(ch >= '0' && ch<='9')  {
                newStr+=ch;
            }
        }
        int size = newStr.size();
        for(int i=0; i<size; i++)  {
            if(newStr[i] != newStr[size-i-1])  {
                return false;
            }
        }

        return true;
    }
};
