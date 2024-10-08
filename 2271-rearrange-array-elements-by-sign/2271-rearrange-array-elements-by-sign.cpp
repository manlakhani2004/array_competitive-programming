class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp(nums);
        int ps = 0;
        int ng = 1;
        for(int i=0; i<temp.size(); i++){
            if(temp[i]>0){
                nums[ps]= temp[i];
                ps+=2;
            }else{
                nums[ng] = temp[i];
                ng+=2;
            }
        }
        return nums;
    }
};