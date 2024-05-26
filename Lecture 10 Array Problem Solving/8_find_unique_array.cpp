#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
    }

int main(){
    int a[5] = {2, 4, 7, 2, 7};
    int res = findUnique(a, 5);
    cout <<res;
    return 0;
}