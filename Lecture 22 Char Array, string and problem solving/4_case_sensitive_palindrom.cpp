#include <iostream>
using namespace std;

//in this question converting capital letter into small letter and then comparing palindroam or not
char toLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindrom(char arr[], int size){

    int s = 0;
    int e = size-1;

    for(int i = 0; i<size-1; i++){
        if(toLowercase(arr[s]) != toLowercase(arr[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
}


int main(){
    int n;
    cout<<"value of n: ";
    cin>>n;
    char arr[n];
    cout<<"enter string: ";
    cin>>arr;
    int a = palindrom(arr, n);
    cout<<"Palindrom or not: "<<a;

    cout<<endl<<toLowercase('b')<<endl;
    cout<<toLowercase('A')<<endl;

    return 0;
}