#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;

    cout<<" a&b = "<< (a&b) <<endl;
    cout<<" a|b = "<< (a|b) <<endl;
    cout<<" ~a = "<<  (~a) <<endl;
    cout<<" a^b = "<< (a^b) <<endl;

    cout<< (17>>1)<<endl;
    cout<< (17>>2)<<endl;
    cout<< (19<<1)<<endl;
    cout<< (21<<2)<<endl;
    cout<<"*****\n";

    int i= 7;

    cout<<i++<<endl;
    cout<<i<<endl;
    cout<<++i<<endl;

    cout<<i--<<endl;
    cout<<i<<endl;
    cout<<--i<<endl;
    cout<<"*****\n";


    int x, y=1;
    x = 10;
    if(++x){
    cout<<y;
    }
    else{
        cout<<++y;
    }

cout<<"*****\n";


int a1 = 1;
int b1 = 2;
if (a1-- > 0 && ++b1 > 2){
    cout<<"stage1 - inside if ";
}
else{
    cout<<"stage2 - inside else ";
}
cout<< a1 <<" "<< b1 <<endl;
    return 0;
}