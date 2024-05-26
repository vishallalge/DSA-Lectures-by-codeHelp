#include <iostream>
using namespace std;
int addition_of_array(int arr[], int size){
    if(size==0){
        return 0; 
    }
    if(size==1){
        return arr[0];
    }
    int remaining_part = addition_of_array(arr+1, size-1);
    int sum = arr[0] + remaining_part;
    return sum;
    
}
int main(){
    int size = 6;
    int arr[6] = {10,2,3,4,5,6};
    int sum = addition_of_array(arr, size);
    cout<<"sum is: "<< sum;

    return 0;
}