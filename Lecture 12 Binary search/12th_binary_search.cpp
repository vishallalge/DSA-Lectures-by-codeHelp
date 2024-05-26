#include <iostream>
using namespace std;

int binarySearch (int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end- start)/2;
    while (start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key <= arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};

    int evenIndex = binarySearch(even, 6, 6);
    cout<<"The index of number 6 is "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd, 5, 5);
    cout<<"The index of number 5 is "<<oddIndex<<endl;

    return 0;
}