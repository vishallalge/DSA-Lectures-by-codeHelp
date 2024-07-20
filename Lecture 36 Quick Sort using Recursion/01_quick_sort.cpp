#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //handling left and right part
    int i = s, j = e;
    
    while(i<pivotIndex && j>pivotIndex){
        
        while(arr[i]<= pivot){
            i++;
        }
        while(j > pivot){
            j--;
        }
        if(i<pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}


void quick_sort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //partition
    int p = partition(arr, s, e);

    //left part
    quick_sort(arr, s, p-1);

    //right part
    quick_sort(arr, p+1, e);
}

int main(){
    int arr[] = {9, 8, 7, 6, 5, 4, 3};
    int n = size(arr);

    quick_sort(arr, 0, n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


}