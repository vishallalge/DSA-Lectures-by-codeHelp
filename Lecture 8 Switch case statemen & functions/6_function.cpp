#include <iostream>
using namespace std;
void update(int a){
    a = a / 2;
}

int main(){
    int a = 15;
    update(a);
    a -= 5;
    cout<<a;
}