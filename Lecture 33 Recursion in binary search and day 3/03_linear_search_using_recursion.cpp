#include <iostream>
using namespace std;

bool linear_search(int arr[], int size, int key){
    //base case
    if(size == 0)
        return false;
    if(arr[0] == key)
        return true;
    else{
        int remaining_part = linear_search(arr+1, size-1, key);
        return remaining_part;
    }
}

int main(){
    int size = 7;
    int arr[size] = {1,2,3,4,5,6,7};
    int key = 9;
    int ans = linear_search(arr, size, key);
    if(ans)
        cout<<"found";
    else
        cout<<"not found";


    return 0;
}