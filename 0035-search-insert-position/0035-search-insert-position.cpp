class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int index;
     for(int i=0; i<nums.size(); i++){
        if(nums[i]==target){
            return i;
        }
        if(target <= nums[i])
        {
            index=i;
            break;
        }
     }   
     return index;
    }
};