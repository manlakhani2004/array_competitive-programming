class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int> temp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0)
            temp.push_back(nums[i]);
        }

        for(int i=0; i<temp.size(); i++){
            nums[i] = temp[i];
        }

        for(int i=temp.size(); i<nums.size(); i++){
            nums[i]=0;
        }
        // sol 2 
        // int index=0;
        // for(auto it=nums.begin(); it!=nums.end(); it++){
        //     if(*it == 0){
        //         nums.erase(nums.begin()+index);
        //         nums.push_back(0);
        //     }
        //     index++;
        // }
    }
};