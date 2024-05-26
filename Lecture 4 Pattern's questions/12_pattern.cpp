#include <iostream>
using namespace std;
int main(){
    int n = 5;
    // cin>>n;
    int row = 1;
    while(row <= n){

        //first triangle
        int col1 = 1;
        int num = n-row+1;
        while (num){
            cout<<col1;
            col1++;
            num--;
        }

        //second triangle
        int star = 2;
        while(star<=row){
            cout<<"*";
            star++;
        }

        //third triangle
        int star2 = 2;
        while (star2<=row){
            cout<<"*";
            star2++;
        }

        //fourth triangle
        int col2 = 1;
        int num1 = n - row+1;
        while(num){
            cout<<row;
            col1--;
            num1--;
        }



        cout<<endl;
        row++; 
    }
    return 0;
}