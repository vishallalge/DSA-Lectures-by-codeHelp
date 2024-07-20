#include<iostream>
#include<vector>
using namespace std;

void mearge(int arr1[], int n, int arr2[], int m){
    int i = 0, j = 0;
    while(i<n && j<m){
        if (arr1[i]<arr2[j]){
            arr1[i] = arr1[i];
            i++;
            j++;
        }
        else if (arr1[i] == arr2[j]){
            arr1[i+1] = arr2[j];
            i = i+2;
            j++;
        }
        else{
            arr1[i] = arr2[j];
            i++;
            j++;
        }
    }
    j = 0;
    while(i<n){
        if(arr1[i]<arr2[j]){
            arr1[i] = arr2[j];
            i++;
            j++;
        }
    }
}

void print(int ans[], int n1){
    for(int i = 0; i<n1; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[6] = {1,2,3,0,0,0};
    int arr2[3] = {2,5,6};
    mearge(arr1, 6, arr2, 3);
    print(arr1, 6);

    return 0;
}