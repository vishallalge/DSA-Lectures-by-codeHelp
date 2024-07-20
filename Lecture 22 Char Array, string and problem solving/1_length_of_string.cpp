#include<iostream>
using namespace std;

int length(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){

    char arr[20];
    cout<<"enter your string: ";
    cin>>arr;
    cout<<"length of your array is: "<<length(arr);

    return 0;
}