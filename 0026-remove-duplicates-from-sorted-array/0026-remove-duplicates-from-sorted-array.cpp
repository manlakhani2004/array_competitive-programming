class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // set<int> s;
        // for(int i=0; i<nums.size(); i++){
        //     s.insert(nums[i]);
        // }
        // int index = 0;
        // for(auto it:s){
        //     nums[index]=it;
        //     index++;
        // }
        // return index;
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[k]!=nums[i]){
                nums[k+1] = nums[i];
                k++;
            }
        }
        return k+1;
    }
};