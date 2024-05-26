#include <iostream>
#include <string>
using namespace std;

int getMaxOcc(string str){
    int arr[26] = {0};
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for(int i = 0; i<26; i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ans;
}


int main(){
    cout<<"Your string: "<<endl;
    string s;
    cin>>s;
    char ch;
    ch = getMaxOcc(s);
    cout<<"'"<<ch<<"' occured maximum time: ";
    return 0;
}