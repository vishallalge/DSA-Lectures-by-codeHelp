// if you dont know what is pivot element then draw a graph of given array and 
// then you will atomatically identify your pivot element, or you go throw this all process however 
// you are not able to identify pivot element then run this code see answer then look at the graph and 
// then you definately can identify your pivot element.
#include<iostream>
using namespace std;

int find_pivot(int arr[], int n){
        int s = 0;
        int e = n-1;
        int mid = (s+e)/2;
        while(s<e){
            if (arr[mid] >= arr[0]){
                // cout<<"enter in IF"<<endl;
                s = mid + 1;
                // cout<<"mid: "<<mid<<endl;
                // cout<<"s update: "<<mid + 1<<endl;
            }
            else{
                // cout<<"enter in else"<<endl;
                e = mid;
                // cout<<"e update: "<<mid<<endl;
                // cout<<"*";
            }
            mid = (s+e)/2;
        }
        return arr[s];

}

int main(){
    int arr[5] = {4,3,5,6,8};
    cout<<"pivot of this array is: "<<find_pivot(arr, 5);



    return 0;
}