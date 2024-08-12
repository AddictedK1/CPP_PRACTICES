// count how many time every element is occuring in the given array.


#include<iostream>
using namesoace std;

void Freq(int arr[], int size)  {
    bool visited[size];
    int count;
    cout<<"number | freq "<<endl;

    for(int i=0; i<size; i++)  {
        if(visited[i]==true) continue;

        count=0;
        for(int j=0; j<size; j++)  {
            if(arr[i]==arr[j])  {
                visited[j]=true;
                count++;
            }
        }
        cout<<" "<<arr[i]<<"       "<<count<<endl;

    }
}

int main()  {
    int nums[] = {1,2,4,4,4,5,6,4,4,6};
    int size = sizeof(nums)/sizeof(int);
    Freq(nums,size);
    
    return 0;
}
