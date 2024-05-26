//                  Homework
//         Painter allocation problem
//               15/10/2023  ----> solve this problem on coding ninja
//   problem name is:-  Painter's Partition Problem (== book allocation problem)


// ans code:-  
bool ispossible(vector<int> &boards, int k, int mid){
    int totalSum = 0;
    int painter = 1;
    for(int i=0; i<boards.size(); i++){
        if(boards[i]+ totalSum <= mid){
            totalSum += boards[i];
        }
        else{
            painter++;
            if(boards[i]> mid || painter>k){
                return false;
            }
            totalSum = boards[i];
        }
    }
    return true;

}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    for(int i = 0; i<boards.size(); i++){
        sum += boards[i];
    }

    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(ispossible(boards, k, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}