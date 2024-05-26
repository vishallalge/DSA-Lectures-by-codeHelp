#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi; //---> for max heap
    priority_queue<int,vector<int>, greater<int> > mini; 
    maxi.push(1);
    maxi.push(4);
    maxi.push(3);
    maxi.push(2);
    int n = maxi.size();
    for(int i = 0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(5);
    mini.push(3);
    mini.push(7);
    mini.push(1);

    int n1 = mini.size();
    for(int i = 0; i<n1; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    return 0;
}