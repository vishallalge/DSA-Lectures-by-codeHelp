// find peack element of mountain array: 
#include<iostream>
using namespace std;

int pick_of_array(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = (s+e)/2;
    while(s<e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;   //dont use here (e = mid -1), beacuse may be if there is mid is peack then it will take smaller element than peack
        }
        mid = (s+e)/2;
    }
    return s;
}
int main(){

    int arr[8] = {3,4,5,6,4,3,2,1};
    int pickElement = pick_of_array(arr, 8);
    cout<<"pick of the element index is "<<pick_of_array(arr, 8);
    cout<<" AND this element is "<< arr[pickElement];

    return 0;
}