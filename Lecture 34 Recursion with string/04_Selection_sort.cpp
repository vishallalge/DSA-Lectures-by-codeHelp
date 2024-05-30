#include <iostream>
using namespace std;

void sortArray(int arr[], int n){
    //base case
    if(n==0 || n==1) return ;

    int mini = 0;
    for(int j = 1; j <= n-1; j++){
        if(arr[j]<arr[mini]){
            mini = j;
        }
        swap(arr[mini], arr[j-1]);
    }
    sortArray(arr, n-1);
}

int main() {
    int arr[5] = {5,4,3,2,1};
    sortArray(arr, 5);
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
}