#include<iostream>
using namespace std;
int main(){
    char arr[20];
    cin>>arr;
    cout<<"your name is: "<<arr;

    // In char array at last of the array it stores atomatically null char;
    // if you enter in your string any null char ex. 1.space, 2.tab, 3.enter it will take only first latter ||
    // only continous part of array


    return 0;
}