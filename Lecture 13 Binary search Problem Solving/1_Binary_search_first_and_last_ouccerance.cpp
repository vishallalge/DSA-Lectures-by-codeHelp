// #include <iostream>
// using namespace std;
// //first occerance(check left to right) of element means search this element in perticular array and find its position
// int first_occ(int arr[], int n, int key){
//     int start = 0; 
//     int end = n-1;
//     int mid = start + (end - start)/2;
//     int ans = -1;
//     while(start<=end){
//         if(arr[mid] == key){
//             ans = mid;
//             end = mid - 1;
//         }
//         else if(key > arr[mid]){
//             start = mid + 1;
//         }
//         else if(key < arr[mid]){
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return ans;
// }

// //last occerance(check right to left) of element means search this element in perticular array and find its position

// int last_occ(int arr[], int n, int key){
//     int start = 0;
//     int end = n-1;
//     int mid = start + (end - start)/2;
//     int ans = -1;
//     while(start <= end){
//         if(arr[mid]==key){
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (key < arr[mid]){
//             end = mid - 1;
//         }
//         else if (key > arr[mid]){
//             start = mid + 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return ans;
// }
// int main(){

//     int arr[7] = {1,2,3,3,3,3,4};
//     int firstOcc = first_occ(arr, 7, 3);
//     int lastOcc = last_occ(arr, 7, 3);
//     int total_Occ = (lastOcc - firstOcc) + 1;
//     cout<<"first occerance of 3 is "<<firstOcc<<"-index"<<endl;
//     cout<<"last occerance of 3 is "<<lastOcc<<"-index"<<endl;
//     cout<<"Total occerance of 3 is "<<total_Occ<<" Times."<<endl;


//     return 0;
// }


// Friday 13/10/2023

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else if(arr[mid]>k){
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int LastOccurence(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else if(arr[mid]>k){
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}



int main(){
    int arr[7] = {1,2,3,3,3,3,4};
    int firstOcc = firstOccurence(arr, 7, 3);
    int lastOcc = LastOccurence(arr, 7, 3);
    int total_Occ = (lastOcc - firstOcc) + 1;
    cout<<"first occerance of 3 is "<<firstOcc<<"-index"<<endl;
    cout<<"last occerance of 3 is "<<lastOcc<<"-index"<<endl;
    cout<<"total count of occurence is "<<total_Occ<<endl;
    return 0;
}