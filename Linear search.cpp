int searchInSorted(int arr[], int N, int K) {
        // here N is size and K is key
        for(int i=0; i<N; i++)  {
            if(arr[i]==K) return 1;
        }
        return -1;
    }
