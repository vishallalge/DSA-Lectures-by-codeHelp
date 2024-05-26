#include <iostream>
using namespace std;

bool is_sorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining_part = is_sorted(arr+1, size-1);
        return remaining_part;
    }
}
int main(){
    int size = 6;
    int arr[size] = {1,2,3,4,5,6};
    int ans = is_sorted(arr, size);
    if(ans){
        cout<<"is sorted."<<endl;
    }
    else{
        cout<<"is not sorted."<<endl;
    }
    return 0;
}