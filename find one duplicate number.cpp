//Given an array of N + 1 size, where each element is between 1 and N. Assuming there is only one duplicate number, 
//your task is to find the duplicate number.

#include<iostream>  
using namespace std;

int duplicateNumber(int arr[], int size)  {
    int sum=0;
    size-=1;
    int Nsum=(size*(size+1))/2;
    for(int i=0; i<=size; i++)  {
        sum+=arr[i];   
    }
    return sum-Nsum;

}

int main()  {
    int nums[] = {1,2,3,4,5,6,6};
    int size = sizeof(nums)/sizeof(int);
    int num = duplicateNumber(nums,size);
    cout<<"duplicate number = "<<num<<endl;
    return 0;
}
