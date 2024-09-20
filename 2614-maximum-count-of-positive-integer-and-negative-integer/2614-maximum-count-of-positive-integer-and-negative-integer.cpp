class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int ne=0,ps=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                ps+=1;
            }else if(nums[i]<0){
                ne+=1;
            }
        }

        if(ne >=ps){
            return ne;
        }
        return ps;
    }
};