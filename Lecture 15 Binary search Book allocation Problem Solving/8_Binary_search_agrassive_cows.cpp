// not clearly understand this problem so thats why watch lectuer no 15 again....
// 15-10-2023
// I watch this vedio again for a whole day then I got this question what it exactly want
// this question is similar to befor two's questions you can do this question 
// if not only take break come again, stay calm and see you can easily understand this problem

// coding ninja problem name:- Aggressive Cows
bool isPossible(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int placeCow = stalls[0];
    for(int i = 0; i<stalls.size(); i++){
        if(stalls[i] - placeCow >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            placeCow = stalls[i];
        }
    }
    return false;
}



int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    for(int i = 0; i < stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}