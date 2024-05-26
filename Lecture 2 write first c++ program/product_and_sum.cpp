#include <iostream>
using namespace std;
int main(){
    int number = 12345;
    int product = 1;
    int sum = 0;
    while(number != 0){
        int digit = number%10;
        product = product * digit;
        sum = sum + digit;
        number = number/10;
    }
    cout<<product - sum;
    return 0;
}