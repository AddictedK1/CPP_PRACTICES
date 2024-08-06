#include<iostream>
using namespace std;

int partition(int arr[], int start, int end)  {
    int pivot = arr[end];
    int i=start-1;

    for(int j=start; j<=end-1; j++)  {
        if(arr[j]<pivot)  {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}

void QuickSort(int arr[], int start, int end)  {
    if(end<=start) return; 

    int pivotindx = partition(arr,start,end);
    QuickSort(arr,start,pivotindx-1);
    QuickSort(arr,pivotindx+1,end);
}

int main()  {
    int arr[] = {9,5,6,4,8,1,7,0,2,3};
    int start = 0;
    int end = 9;
    QuickSort(arr, start, end);
    for(int i=0; i<10; i++)  {
        cout<<arr[i]<<" ";
    }
    return 0;
}