#include<iostream>
using namespace std;
int main()
{
    int n = 5;

    int i = 1;
    while(i<=n){
        int j;
        j = i;
        while(j<=n){
            cout<<i;
            j = j+1;

        }
        cout<<endl;
        i = i+1;
    }
    return 0;
}