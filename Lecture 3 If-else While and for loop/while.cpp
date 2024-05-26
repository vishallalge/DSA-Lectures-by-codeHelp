#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int i=2;
    while( i<=n ){
        if (i % 2 ==0){
            sum = sum + i;  
            cout<<"sum from 1 to "<<i<<" is = "<<sum<<endl;
        }
        i++;
    } 
   
    return 0;
}