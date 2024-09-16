class Solution {
public:
    int countElements(vector<int>& nums) {
        int min = *min_element(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());
        int cnt =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==min || nums[i]==max){
                cnt++;
            }
        }
        return (nums.size()-cnt);
    }
};