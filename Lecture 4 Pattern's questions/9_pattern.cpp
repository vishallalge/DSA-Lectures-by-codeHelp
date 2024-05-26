#include <iostream>
using namespace std;
int main(){

    int n = 3;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<= n){
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
cout<<endl;
cout<<endl;
    int n1 = 3;
    int row1 = 1;
    while(row1<=n1){
        int col1 = 1;
        while(col1<= n1){
            char ch1 = 'A'+col1-1;
            cout<<ch1<<" ";
            col1++;
        }
        cout<<endl;
        row1++;
    }
cout<<endl;
cout<<endl;
    int n2 = 3;
    int row2 = 1;
    char ch2 = 'A';
    while(row2<=n2){
        int col2 = 1;
        while(col2<= n2){
            cout<<ch2<<" ";
            ch2++;
            col2++;
        }
        cout<<endl;
        row2++;
    }
    return 0;
}