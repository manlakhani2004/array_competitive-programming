class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n= nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int ind;
        for(int i=0; i<n; i++){
            if(nums[i]!=maxi && (nums[i]*2)>maxi){
               return -1;
            }
            if(nums[i]==maxi){
                ind=i;
            }
        }
        return ind;
    }
};