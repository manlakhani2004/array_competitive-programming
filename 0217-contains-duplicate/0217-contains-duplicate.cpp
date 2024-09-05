class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }

        return false;
        // int count;
        // for(int i=0; i<n; i++)
        // {
        //     count=0;   
        //     for(int j=0; j<n; j++){
        //         if(nums[i] == nums[j]){
        //             ++count;
        //             if(count>1){
        //                 return true;
        //                 break;
        //             }
        //         }

        //     }
        // }
        // return false;

        
    }
};