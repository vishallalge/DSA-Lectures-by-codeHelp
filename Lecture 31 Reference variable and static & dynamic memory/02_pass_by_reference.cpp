#include <iostream>
using namespace std;

void pass_by_value(int n){
    n++;
    // in pass by value function create new memory for its argument or parameter
    // and increment this vlaue in this function--->
}

void pass_by_reference(int& n){
    n++;
    // in pass by reference function use main program memory insted creating new memory for function
    // and increment this vlaue in function as well as main function...
}

int main(){
    int n = 5;
    cout<<"initial value: "<<n<<endl;

    pass_by_value(n);
    cout<<"pass by value: "<<n<<endl;

    pass_by_reference(n);
    cout<<"pass by reference: "<<n<<endl;

    
    return 0;
}
