#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int row = 1;
    int space;
    while(row<=n){

        int space = n - row;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int col = 1;
        while(col <= row){
            cout<<"*"<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }
cout<<"\n";
cout<<"\n";

int n1 = 4;
int row1 = 1;
while(row1<=n){
    int col1 = 1;
    int star1 = n-col1+1;
    while(star1){
        cout<<"*"<<" ";
        col1++;
        star1--;
    }
    cout<<endl;
    row1++;
}
    return 0;
}