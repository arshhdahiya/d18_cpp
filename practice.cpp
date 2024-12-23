class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
            bitset<10001> xNot=0;
            for(int x: banned)
                xNot[x]=1;
            int sum=0, cnt=0;
            for(int x=1; x<=n && sum<=maxSum; x++){
                if (!xNot[x]){
                    sum+=x;
                    cnt++;
                }
            }
            return (sum<=maxSum)?cnt:cnt-1;
    }

    // int maxCount(vector<int>& banned, int n, int maxSum) {
// minSol
        // // sorting the array
        // sort(banned.begin(), banned.end());
        // int start = 0;
        // int end = banned.size()-1;

        // // started solving the answer;
        // int answer = 0;
        // int sum = 0;
        // int counter = 1;
        // while(counter<=n && start<=end) {
        //    if(counter == banned[start]){
        //     counter++;
        //     start++;
        //    } else if(counter+sum<=maxSum){
        //     answer++;
        //     sum+=counter;
        //     counter++;
        //    }
        //    else{
        //     break;
        //    }  
        // }
        // return answer;
    // }
};



