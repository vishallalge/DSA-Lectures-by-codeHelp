#include <iostream>
using namespace std;

void findSetBits(int a, int b){
    int countA = 0, countB = 0;
    int ans;
    while((a!=0) || (b!=0)){
        switch(1){
            case 1:
                if(a&1){
                    countA++;
                }
                a = a>>1;

            case 2:
                if(b&1){
                    countB++;
                }
                b = b>>1;
        }
    }
    ans = countA + countB;
    cout<<ans;
}

int main(){
    int x, y;
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;

    findSetBits(x, y);
    return 0;
}