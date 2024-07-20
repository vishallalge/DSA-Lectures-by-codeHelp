#include<iostream>
using namespace std;
int palindrom(char arr[], int size){
    int s = 0;
    int e = size-1;

    for(int i = 0; i<size-1; i++){
        if(arr[s] != arr[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }

}

int main(){
    int n;
    cout<<"value of n: ";
    cin>>n;
    char arr[n];
    cout<<"enter string: ";
    cin>>arr;
    int a = palindrom(arr, n);
    cout<<"Palindrom or not: "<<a;

    return 0;
}