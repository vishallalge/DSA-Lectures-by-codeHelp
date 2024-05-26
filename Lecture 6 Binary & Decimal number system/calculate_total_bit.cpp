#include <iostream>
#include <math.h>
using namespace std;

// int convert_Into_Bit(int n){
//     int ans = 0;
//     int i = 0;

//     while(n!=0){
//         int bit = n&1;
//         ans = (bit*pow(10,i))+ans;
//         n = n>>1;
//         i++;
//     } 
//     return ans;
// }

// int bit_counter(int n , int m){
//     int first_num = convert_Into_Bit(n);
//     int secound_num = convert_Into_Bit(m);
//     int count1 = 0;
//     int count2 = 0;
//     while (n)
//     {
//         if(first_num&1){
//             count1++;
//         }
//        first_num = first_num>>1;
//     }
//     while (secound_num)
//     {
//         if(secound_num&1){
//             count2++;
//         }
//         secound_num = secound_num>>1;
//     }
//     return count1+count2;
    
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int res1=convert_Into_Bit(a);
//     int res2=convert_Into_Bit(b);
//     string = res1 + res2;
//     int res = bit_counter(a ,b);
//     cout<<res;
//     return 0;
// }