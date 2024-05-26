#include <iostream>
using namespace std;

void read(int n, string arr[]){
    if(n==0){
        return;
    }
    int digit = n%10;
    n = n/10;
    cout<<arr[digit]<<" ";   // ---> head recursion

    read(n, arr);
    
    cout<<arr[digit]<<" ";   // ---> tail recursion
}
int main(){
    int n = 512;
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    read(n, arr);

    return 0;
}