#include<iostream>
#include<array>
using namespace std;
int main(){

    // how we can use array in STL and its some functions--->>> 
    int basic[3] = {1, 2, 3};
    array<int, 4> a = {1,2,3,4};
    cout<<"size of array: "<<a.size()<<endl;
    cout<<"first element: "<<a.front()<<endl;
    cout<<"last element: "<<a.back()<<endl;
    cout<<"empty or not:"<<a.empty()<<endl;
    cout<<"find on perticular position element:"<<a.at(3)<<endl;
    
    return 0;
}