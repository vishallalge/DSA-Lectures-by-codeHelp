#include <iostream>
using namespace std;

int AP(int n){
    int expration = (3*n+7);
    return expration;
}

int main()
{
    int a ;
    cin>>a;
    int ans = AP(a);
    cout<<ans;
    return 0;
}