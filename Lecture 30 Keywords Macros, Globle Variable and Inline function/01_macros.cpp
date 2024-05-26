#include <iostream>
#define pi 3.14  //-->> this value not change if once define 
using namespace std;
int main(){

    int r = 5;
    //double pi = 3.14;
    //pi = pi+1;// ---------->>>harmful way becoz your value of pi will change by using this 
    double area = pi*r*r;

    cout<<"area: "<<area;
    return 0;
}