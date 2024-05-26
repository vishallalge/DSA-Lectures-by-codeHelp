// allocate each book to each student
#include<iostream>
using namespace std;

bool isPossible(int arr[], int n , int stud, int mid){
    int student = 1;
    int page_sum = 0;
    for (int i = 0; i < n; i++){
        if(page_sum + arr[i] <= mid){
            page_sum = page_sum + arr[i];
        }
        else{
            student = student + 1;
            if ( student > stud || arr[i] >mid){
                return false;
            }
            page_sum = arr[i];
        }
    }
    return true;
}
int minimum_pages(int arr[], int n, int stud ){
    int total_pages = 0;
    int s = 0;
    for (int i = 0; i < n; i++){
        total_pages = total_pages + arr[i];
    }
    int e = total_pages;
    int mid = s + (e - s)/2;
    int ans = -1;
    while (s<=e){
        if(isPossible(arr, n, stud, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
int main(){
    int n = 4;
    int stud = 2;
    int arr[n] = {10, 20, 30, 40};
    cout<<"ans = "<<minimum_pages(arr, n, stud);
    return 0;
}