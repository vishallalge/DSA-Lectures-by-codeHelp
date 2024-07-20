#include <iostream>
using namespace std;
int main(){
    int row = 3;
    int col = 3;
    int arr[row][col];


    // taking row-wise input from user
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>>arr[j][i];                // ---> do change in this column
        }
    }
 
 
    // printing arr[][] row-wise
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}