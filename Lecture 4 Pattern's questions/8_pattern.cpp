#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<row-col+1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }


    return 0;
}