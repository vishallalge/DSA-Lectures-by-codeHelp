#include<iostream>
#include<deque>
using namespace std;
int main(){
    // how we can use deque in STL and its some functions--->>>
    deque<int> d;
    d.push_back(4);
    d.push_front(3);

    cout<<"random position access: "<<d.at(1)<<endl;
    cout<<"first element: "<< d.front()<<endl;
    cout<<"last element: "<< d.back()<<endl;

    cout<<"before erase: "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1); //first for start and second for index
    cout<<"after erase: "<<d.size()<<endl;


    return 0;
}