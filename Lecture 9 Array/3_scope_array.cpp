#include<iostream>
using namespace std;

void update(int a[], int n){
    cout<<"starting the function"<<endl;
    a[0] = 120;
    for(int i = 0; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout <<endl<<"function end";
}

int main(){
    int arr[3]= {1,2,3};
    update(arr, 3);
    cout <<"starting main function"<<endl;
    for(int i = 0; i<3; i++){
        cout <<arr[i]<<" ";
    }
    cout<<endl;
    cout <<"ending main function"<<endl;
    cout <<"now calling the main function"<<endl;
    update(arr, 3);

    return 0;
}