// leetcode  ---->  https://leetcode.com/problems/evaluate-reverse-polish-notation/description/


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(string str : tokens)  {
            if(str!="+" && str!="-" && str!="*" && str!="/")  {
                stk.push(stoi(str));
            }else{
                int temp;
                if(str == "+")  {
                    int a = stk.top();
                    stk.pop();
                    temp=a;
                    a = stk.top();
                    stk.pop();
                    temp += a;
                    stk.push(temp); 
                }else if(str == "-")  {
                    int a = stk.top();
                    stk.pop();
                    int b = stk.top();
                    stk.pop();
                    temp = b-a;
                    stk.push(temp);
                }else if(str == "*")  {
                    int a = stk.top();
                    stk.pop();
                    temp=a;
                    a = stk.top();
                    stk.pop();
                    temp *= a;
                    stk.push(temp);
                }else if(str == "/")  {
                    int a = stk.top();
                    stk.pop();
                    int b = stk.top();
                    stk.pop();
                    temp = b/a;
                    stk.push(temp);
                }
            }

        }

        return stk.top();
    }
};
