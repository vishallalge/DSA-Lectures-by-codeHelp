#include <iostream>
using namespace std;
int main()
{
    int a=45;
    int* b = &a;
    cout<<"the address of a: "<<b<<"\n";
    cout<<"the address of a is: "<<&a<<"\n";
    cout<<"the value of a: "<<a<<"\n";
    cout<<"the value of a is: "<<*b<<"\n";  
    //pointer to pointer
    int** c= &b;
    cout<<"the value of a is "<<c;

    //lecture number 26 and 27 you can complete very easily if
    //any quary just search on google or you can search on GFG it will helps you
    //to understand this comcept...



    return 0;
}