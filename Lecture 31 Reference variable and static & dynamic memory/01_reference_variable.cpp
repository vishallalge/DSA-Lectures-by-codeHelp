#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int &b = a;  // create an referance variable 

    cout<<a<<endl;
    a++;
    cout<<a<<endl;
    b++;
    cout<<a<<endl;
    a++;
    cout<<b<<endl;

    return 0;
}
