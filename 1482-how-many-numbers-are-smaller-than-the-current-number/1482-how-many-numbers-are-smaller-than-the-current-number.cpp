class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count;
        int n = nums.size();
        for(int i=0; i<n; i++){
            count =0;
            for(int j=0; j<n; j++){
                if(nums[i]!=nums[j] && nums[j]<nums[i])
                    count++;
            }
             ans.push_back(count);
        }
        return ans;
    }
};