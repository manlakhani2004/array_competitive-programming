class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int mini = int(n/3)+1;

        unordered_map<int,int> ans;
        vector<int> nm;
        for(int i=0; i<n; i++){
            ans[nums[i]]++;
            if(ans[nums[i]]==mini){
                nm.push_back(nums[i]);
            }
        }
        return nm;
    }
};