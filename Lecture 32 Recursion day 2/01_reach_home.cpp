#include <iostream>
using namespace std;

void reach_home(int away){
    cout<<"remaining distance: "<<away<<"km to reach home"<<endl;
    if(away == 0){
        cout<<"finally reach home sucessfully";
        return;
    }
    away--;
    reach_home(away);
}

int main(){
    int away_from_home = 10;
    reach_home(away_from_home);
    return 0;
}