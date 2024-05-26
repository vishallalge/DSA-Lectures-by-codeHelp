#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    for (int i=1; i<size; i++){
        ans = ans ^ i;
    }
    return ans;
}


int main(){
    int a[5]={1,2,2,4,3};
    int res = findDuplicate(a, 5);
    return 0;
}