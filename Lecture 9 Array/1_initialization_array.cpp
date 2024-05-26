#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    int n = 10;
    int b[n] = {a};
    // cout<<b[5];
    int value = 1;
    for(int i = 0 ; i<n; i++){
        b[i]= {value};
        cout<<b[i]<<" ";
    }
    cout<<endl;
    int z[10]= {0};
    for(int j = 0 ; j<n ; j++){
        cout<<z[j]<<" ";
    }
    return 0;
}