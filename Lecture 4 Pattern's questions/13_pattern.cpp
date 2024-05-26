#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row = 1;
    while(row <= n){

        //first triangle
        int col1 = 1;
        int num = n-row+1;
        while (num){
            cout<<col1<<"  ";
            col1++;
            num--;
        }

        //second triangle
        int star = 2;
        while(star<=row){
            cout<<"*"<<"  ";
            star++;
        }

        //third triangle
        int star2 = 2;
        while (star2<=row){
            cout<<"*"<<"  ";
            star2++;
        }

        //fourth triangle
        int col2 =  n - row+1;
        while(col2>=1){
            cout<<col2<<"  ";
            col2--;

        }



        cout<<endl;
        row++; 
    }
    return 0;
}