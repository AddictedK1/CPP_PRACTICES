//  Given an array of integers arr[] and an integer target. Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.            
//  Also, return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.


#include<iostream>
using namespace std;

void targetSum(int arr[], int size, int target)  {
    int indices[2]={-1,-1};
    for(int i=0; i<size; i++)  {
        for(int j=i+1; j<size; j++)  {
            if(arr[i]+arr[j]==target) {
                indices[0]=i;
                indices[1]=j;
                cout<<indices[0]<<" "<<indices[1]<<endl;            
                return;
            } 
        }
    }
    cout<<indices[0]<<" "<<indices[1]<<endl;
    return;    
}


int main()  {
    int nums[] = {1,2,3,5,4,9,7,3,4,25};
    int size = sizeof(nums)/sizeof(int);
    int target=30;
    targetSum(nums,size,target);
    
    return 0;
}
