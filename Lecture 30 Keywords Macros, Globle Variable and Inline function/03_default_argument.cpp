#include <iostream>
using namespace std;

void print(char name[], int size, int start = 0){
    for(int i=start; i<size; i++){
        cout<<name[i];
    }
}
int main(){

    char name[6] = {'v', 'i', 's','h', 'a', 'l'};
    int size = 6;
    print(name, size); // In this line we are using default argument...
    cout<<endl;
    print(name, size, 2); // In this line we are not using default argument...
    
    return 0;
}