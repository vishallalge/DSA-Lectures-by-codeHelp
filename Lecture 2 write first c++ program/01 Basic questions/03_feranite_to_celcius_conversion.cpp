#include <iostream> 
using namespace std;

// (32°F − 32) × 5/9
int fToc(float f){
    int b = (f - 32) * (5/9);
    return b;
}
int main(){
    float Fahrenheit, celsius;
    cout<<"Fahrenheit: ";
    cin>>Fahrenheit;
    celsius = fToc(Fahrenheit);
    cout<<Fahrenheit<<" -> "<<celsius<<endl;
    return 0;
}