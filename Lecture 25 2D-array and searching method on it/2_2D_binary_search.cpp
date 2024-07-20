#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int key){

    int s = 0;
    int e = (3*4)-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        int element = arr[mid/4][mid/3];   // ---> this line is important for 2D binary search
        if(element == key){
            return 1;
        }
        if(element<key){
            s = mid +1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
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