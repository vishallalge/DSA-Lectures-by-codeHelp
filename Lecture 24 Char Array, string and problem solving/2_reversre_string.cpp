#include<iostream>
using namespace std;

void reverse(char name[], int length){
    int s = 0;
    int e = length-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int length(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){
    char name[20];
    cout<<"enter your string: ";
    cin>>name;
    int len = length(name);
    reverse(name,len);
    cout<<name;



    return 0;
}