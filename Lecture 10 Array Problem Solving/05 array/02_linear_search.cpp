#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size, int k){
    for(int i = 0; i<size; i++){
        if(arr[i] == k){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5] = {5,4,3,2,1};
    int key;
    cout<<"key: ";
    cin>>key;

    bool result = linearSearch(arr, 5, key);
    if(result){
        cout<<key<<" is present";
    }
    else{
        cout<<key<<" is not present";
    }

    return 0;
}