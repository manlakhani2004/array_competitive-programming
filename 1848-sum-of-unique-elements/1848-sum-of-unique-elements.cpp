class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        int cnt_nm = 0;
        for(int i=0; i<n; i++){
            cnt_nm =0;
            for(int j=0; j<n; j++){
                if(nums[i]==nums[j]){
                    cnt_nm +=1;
                }
            }
            if(cnt_nm ==1){

                sum += nums[i];
            }
        }
        return sum;
    }
};