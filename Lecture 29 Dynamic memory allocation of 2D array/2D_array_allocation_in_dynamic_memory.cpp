#include <iostream>
using namespace std;
int main (){

    int row, col;
    cout<<"row: ";
    cin>>row;

    cout<<"col: ";
    cin>>col;

    int** arr = new int* [row];
    for(int i=0; i<row; i++){
        arr[i] = new int [col];
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

// deletion of used dynamic memory is most important...

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<row; i++){
        delete []arr[i];
    }
    delete []arr;
    return 0;
}