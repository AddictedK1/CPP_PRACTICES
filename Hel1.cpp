#include<iostream>
using namespace std;

void display_array(int arr[], int size)  {
    cout<<"array: ";
    for(int i=0; i<size; i++)  {
        cout<<arr[i]<<" ";
    }
}

int search(int arr[], int size, int key)  {
    int i=0;
    while(i<size)  {
        if(arr[i]==key)
            return i;
        i++;
    }
    return -1;
}

int insertion(int arr[], int &size, int capacity,int key, int index)  {

    if(size >= capacity)  {
        cout<<"the array is full  :( "<<endl;
        return -1;
    }
    if(index<0 || index>size)  {
        cout<<"invalid index :( "<<endl;
        return -1;
    }else  {
        for(int i=size-1; i>=index; i--)  {
            arr[i+1] = arr[i];
        }
        arr[index] = key;
        size++;
        cout<<"inserted successfully! "<<endl;
        
        return 0;
    }
}

int deletion(int arr[], int &size, int index)  {
    if(index<0 || index>=size)  {
        cout<<"enter valid index"<<endl;
        return -1;
    }else {
        for(int i=index; i<size-1; i++)  {
            arr[i] = arr[i+1];
        }
        cout<<"deleted successfully! "<<endl;
        size--;
        return 0;
    }
}

int main()  {
    int capacity = 10;
    int size = 5;
    int arr[capacity] = {2,5,4,7,1};
    display_array(arr,size); 
    
    
    int key;
    cout<<"\n"<<"enter key to search : ";
    cin>>key;
    int ind = search(arr,size,key);
    if(ind!=-1)  {
        cout<<"element found at index : "<<ind<<endl;
    }else{
        cout<<"the element is not present in the array :("<<endl;
    }
    cout<<"index of key is : "<<search(arr,size,key)<<endl;  
    
    cout<<"**************************************"<<endl;
    cout<<"**************************************"<<endl;
    cout<<"********  insertion  ***********"<<endl;
    cout<<"enter the element to be inserted : ";
    cin>>key;
    cout<<"enter the index at the key to be inserted : ";
    cin>>ind;
    insertion(arr, size, capacity, key, ind);
    cout<<"new array : ";
    display_array(arr, size);

    cout<<"**************************************"<<endl;
    cout<<"**************************************"<<endl;
    cout<<"********  deletion  ***********"<<endl;
    cout<<"enter the index to be deleted : ";
    cin>>ind;
    deletion(arr,size,ind);
    cout<<"new array : ";
    display_array(arr, size);

    
    return 0;
}