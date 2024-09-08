class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int alice,bob;
        int n = nums.size();
        vector<int> arr;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-1; i=i+2){
            //remove
            alice=nums[i];
            bob=nums[i+1];

            //add in arr
            arr.push_back(bob);
            arr.push_back(alice);
        }
        return arr;
    }
};