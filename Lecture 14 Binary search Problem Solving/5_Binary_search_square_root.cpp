#include <iostream>
using namespace std;

int square_root(int n){
    int s = 0;
    int e = n;
    int ans = -1;
    int mid = (s+e)/2;
    while(s<=e){
        int square = mid * mid;
        if((square) == n){
            return mid;
        }
        if (square > n){
            e = mid - 1;
        }
        else{
            ans = mid ;
            s = mid + 1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

double more_precious(int n, int decimal, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i<decimal; i++){
        factor = factor/10;
        for (double j = ans; j*j<n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}
int main (){
    int n = 54;
    int tempSol = square_root(n);
    cout<<"Square root of "<<n<<" is "<<more_precious(n, 3, tempSol);
    return 0;
}