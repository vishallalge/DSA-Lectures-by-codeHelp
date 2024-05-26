// In this question we are using prevese question approach for pivot element 
// then comparing which line we are selecting for binary search and then
// by using binary search we can find this key value.

#include<iostream>
using namespace std;

int find_pivot(int arr[], int n){
        int s = 0;
        int e = n-1;
        int mid = (s+e)/2;
        while(s<e){
            if (arr[mid] >= arr[0]){
                // cout<<"enter in IF"<<endl;
                s = mid + 1;
                // cout<<"mid: "<<mid<<endl;
                // cout<<"s update: "<<mid + 1<<endl;
            }
            else{
                // cout<<"enter in else"<<endl;
                e = mid;
                // cout<<"e update: "<<mid<<endl;
                // cout<<"*";
            }
            mid = (s+e)/2;
        }
        return s;

}

int binary_search(int arr[], int s, int e, int key){
    int start = s; 
    int end = e;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid] == key){
            
            return arr[mid];

        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int n = 6;
    int key = 7;
    int arr[n] = {4,5,6,7,1,2};
    int pvt = find_pivot(arr, n);
    // cout<<pvt;
    if(arr[pvt] <= key && key <= arr[n-1]){
        int ans = binary_search(arr, pvt, n-1, key);
        cout<<ans;
    }
    else{
        int ans = binary_search(arr, 0, pvt-1, key);
        cout<<ans;
    }

    return 0;
}