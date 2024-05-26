#include <iostream>
using namespace std;
int main ()
{
    int amount;
    cout<<"enter amount: ";
    cin>>amount;
    int ch = 1;
    int a;
    switch (ch)
    {
    case 1:
    {
        a = amount/2000;
        cout<<"You need "<< a <<" notes of Rs2000"<<endl;
        amount = amount - (a*2000);
        // cout<<amount<<endl;
        // break;
    }
    case 2:
    {
        a = amount/500;
        cout<<"You need "<< a <<" notes of Rs500"<<endl;
        amount = amount - (a*500);
        // cout<<amount<<endl;
        // break;
    }
    case 3:
    {
        a = amount/200;
        cout<<"You need "<< a <<" notes of Rs200"<<endl;
        amount = amount - (a*200);
        // cout<<amount<<endl;
        // break;
    }
    case 4:
    {
        a = amount/100;
        cout<<"You need "<< a <<" notes of Rs100"<<endl;
        amount = amount - (a*100);
        // cout<<amount<<endl;
        // break;
    }
    case 5:
    {
        a = amount/50;
        cout<<"You need "<<a<<" notes of Rs50"<<endl;
        amount = amount - (a*50);
        // cout<<amount<<endl;
        // break;
    }
    case 6:
    {
        a = amount/20;
        cout<<"You need "<<a<<" notes of Rs20"<<endl;
        amount = amount - (a*20);
        // cout<<amount<<endl;
        // break;
    }
    case 7:
    {
        a = amount/10;
        cout<<"You need "<<a<<" notes of Rs10"<<endl;
        amount = amount - (a*10);
        // cout<<amount<<endl;
        // break;
    }
    case 8:
    {
        a = amount/1;
        cout<<"You need "<<a<<" notes of Rs1"<<endl;
        amount = amount - (a*1);
        // cout<<amount<<endl;
        // break;
    }

    default:
        break;
    }



    return 0;
}