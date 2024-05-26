#include <iostream>
using namespace std;

void get_sum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];

    }
    cout<<"sum of this number is: "<<sum;
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];

    for (int i = 0; i<n; i++){
        cin>>arr[i]; //insted we can type like this //cin>>arr[*(arr+i)]
    }

    get_sum(arr, n);

    return 0;
}