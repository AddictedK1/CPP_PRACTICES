//Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. 
//Merge them in sorted order.

#include<iostream>
using namespace std;

void merge(int arr1[], int arr2[], int size1, int size2)  {
    int i=0;
    int j=0;
    int k=0;
    int result[size1+size2];
    while(i<size1 && j<size2)  {
        if(arr1[i]<arr2[j])  {
            result[k]=arr1[i];
            i++;
            k++;
        }else if(arr1[i]>=arr2[j]) {
            result[k]=arr2[j];
            j++;
            k++;
        }
    }
    
    while(i<size1)  {
        result[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2)  {
        result[k]=arr2[j];
        j++;
        k++;
    }
    
    for(int n=0; n<size1+size2; n++)  {
        cout<<result[n]<<" ";
    }
}



int main()  {
    int arr1[] = {1,2,5,8,9,15};
    int arr2[] = {3,6,8,9,16,36};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    merge(arr1,arr2,size1,size2);
    return 0;
}
