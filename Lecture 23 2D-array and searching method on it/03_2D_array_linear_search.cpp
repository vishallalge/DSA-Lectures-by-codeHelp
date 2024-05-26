#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int key){

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if (key == arr[i][j]){
                return 1;
            }
        }
    }
    return 0;
}

int main (){
    int arr[3][4];
    cout<<"enter your array element by row wise: ";
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"which element you want to search: ";
    int key;
    cin>>key;
    if(isPresent(arr, key)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

    
    return 0;
}