#include<iostream>
#include<vector>
using namespace std;
int main(){
    // how we can use vector in STL and its some functions--->>>
    vector<int> v;
    vector<int> a(5, 1); //first value in breacket is size of vector and second is initialization by this number 
                         //means all vector value become initialized value...
    cout<<"print a: ";
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> b(a);
    cout<<"print b: ";
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"capacity-->> "<<v.capacity()<<endl;
    cout<<"capacity of vector a-->> "<<a.capacity()<<endl;
    
    v.push_back(4);
    cout<<"capacity-->> "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"capacity-->> "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"capacity-->> "<<v.capacity()<<endl;

    cout<<"element at position: "<<v.at(2)<<endl;
    cout<<"first element is: "<<v.front()<<endl;
    cout<<"last element is: "<<v.back()<<endl;

    cout<<"before pop back function: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"after pop back function: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;



    return 0;
}