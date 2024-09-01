class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int sum,i,j;
        for(i=0; i<n; i++){
            sum=0;
            for(j=0; j<=i; j++)
                sum+=nums[j];
            ans.push_back(sum);
        }
        return ans;
    }
};