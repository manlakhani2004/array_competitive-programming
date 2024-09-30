class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        //bruote solution
        // int count;
        // int ans;
        // for(int i=0; i<n; i++){
        //     count=0;
        //     for(int j=0; j<n; j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count==1){
        //         ans = nums[i];
        //         break;
        //     }
        // }   
        // return ans;

        //batter solution
        unordered_map<int,int> hash;
        int ans;
        for(int i=0; i<n; i++){
            hash[nums[i]]++;
        }

        for(auto it:hash){
            if(it.second == 1){
                ans  = it.first;
            }
        }
        return ans;

        //optimal solution
        // int number = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     number ^= nums[i];
        // }
        // return number;
    }
};