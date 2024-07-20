#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cout<<"at which number you have to calculate prime number:- ";
    cin>>n;
    int cnt = 0;
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i<n; i++){
        if(prime[i]){
            cnt++;
            for(int j = 2*i; j<n; j = j+i){
                prime[j] = 0;
            }
        }
    }
    cout<<"between 0 to "<<n<<" prime number is present:- "<<cnt;
    


    return 0;
}