class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int sum=0;
    int n = nums.size();
    int total = n*(n+1)/2;
    for(int i=0; i<n; i++)
    {
        sum+=nums[i];
    }
    return total-sum;
    //  int n = nums.size();
    //   vector<int> hash(n+1,0);
    //   for(int i=0; i<n; i++){
    //     hash[nums[i]]= 1;
    //   }
    // for(int i=0; i<hash.size(); i++){
    //     if(hash[i]==0){
    //         return i;
    //     }
    // }
    //   return 0;

    }
};