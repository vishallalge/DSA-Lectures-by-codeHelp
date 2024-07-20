#include<iostream>
#include<vector>
using namespace std;


/* in this question we are adding two array like number but this number is packed in perticular array
 there are total four cases are formed:-
 
1.    9  -> first array
    + 9  -> second array
     18  -> its addition

2.  12 -> first array
   + 4 -> second array
    16  -> its addition

3.  3  -> first array
  + 12 -> second array
    15 -> its addition

4.  999  -> first array
   +999  -> second array
   1000  -> its addition

using this all methods given code is written 
and in this code there is a one mistake is that 
whatever the answer of this addition is in reverse format, 
so correct it and then refer...
*/
vector<int> reverse(vector<int> v){
    int s = 0, e = v.size()-1;  // if you hava to change the position from reverse then you can change starting position;
    while(s<=e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for (int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void arraySum(int arr1[], int n, int arr2[], int m){
    int i, j, carry; 
    i = n-1;
    j = m-1;
    carry = 0;
    vector<int> ans;
    while(i>=0 && j>=0){
        int val1 = arr1[i];
        int val2 = arr2[j];
        int sum = val1 + val2 + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        i--;
        j--;
    }
    while(i>=0){
        int sum = arr1[i]+ carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        i--;
    }

    while(j>=0){
        int sum = arr2[j]+ carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }

    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
    }

    reverse(ans);
    print(ans);
}

int main(){

    int n = 2;
    int m = 1;
    int arr11[n] = {1,2};
    int arr22[m] = {1};
    arraySum(arr11, n, arr22, m);
    return 0;
}