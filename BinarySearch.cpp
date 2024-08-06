#include<iostream>
using namespace std;

int search(int arr[], int size, int key)  {
    int first =0;
    int last = size-1;

    while(first<=last)  {
        
        int middle = first + (last - first)/2;
        int val = arr[middle];

        if(val < key) first = middle+1;
        else if(val > key) last = middle-1;
        else return middle;

    }
    return -1;
}

int main()  {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int key = 10;
    int size = 11;

    int index = search(arr,size,key);
    if(index!=-1) cout<<"key found at index : "<<index<<endl;
    else cout<<"key not found"<<endl; 
    return 0;
}