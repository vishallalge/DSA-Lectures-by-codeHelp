#include <iostream>
using namespace std;
int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"time when condtructor is called"<<count<<endl;
    }
    ~num(){
        cout<<"time when distructor is called"<<count<<endl;
        count--;
    }
};
int main(){

    cout<<"intside main function";
    
    return 0;
}