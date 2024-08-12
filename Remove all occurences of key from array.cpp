#include<iostream>
using namespace std;

void removeAll(int arr[], int key, int size)  {
    int flg=0;
    for(int i=0; i<size; i++)  {
        if(arr[i] != key)  {
            arr[i-flg] = arr[i]; 
        }
        else  {
        flg++;
        }
    }
    cout<<"new size = "<<(size-flg)<<endl;
}

void display(int arr[], int size)  {
    for(int i=0; i<size; i++)  {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()  {
    int nums[] = {1,2,4,4,4,5,6,4,4,6};
    int size = sizeof(nums)/sizeof(int);
    removeAll(nums,4,size);
    display(nums,size);
    
    return 0;
}
