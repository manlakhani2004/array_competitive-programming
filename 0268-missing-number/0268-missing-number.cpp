class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int flg;
        for(int i=1; i<=n; i++){
            flg=0;
            for(int j=0; j<n; j++){
                if(nums[j]==i){
                    flg=1;
                    break;
                }
            }
            if(flg==0){
                return i;
            }
        }
        return 0;
    }
};