#include <iostream>
using namespace std;

bool check_Pallindrom(string &str, int s, int e){
    if(s>e){
        return true;
    }
    if(str[s] != str[e]){
        return false;
    }
    else{
        return check_Pallindrom(str, s+1, e-1);
    }
}

int main(){
    string str = "abbccddddccbba";
    bool result = check_Pallindrom(str, 0, str.length()-1);
    if(result){
        cout<<"is Pallindrom";
    }
    else{
        cout<<"is not Pallindrom";
    }

}