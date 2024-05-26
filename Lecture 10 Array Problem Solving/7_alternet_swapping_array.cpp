#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for (int i= 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// void swapping(int a , int b){
//     int temp = a;
//     a = b;
//     b = temp;
//     cout<<a<<" "<<b<<" ";
// }
void swapAlternet(int arr[], int size){
    for(int i = 0; i<size; i+=2){
        if (i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}


int main(){
    int even[8] = {11,22,33,44,55,66,77,88};

    int odd[5] = {1,2,3,4,5};
    // print_array(even, 6);

    swapAlternet(even, 8);
    printArr(even, 8);

    cout<<endl;

    swapAlternet(odd, 5);
    printArr(odd, 5);

    return 0;
}