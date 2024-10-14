class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt =1;
        int el = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(cnt==0){
                el=nums[i];
                cnt=1;
            }else{
            if(el == nums[i]){
                cnt++;
            }else{
                cnt--;
            }
            }
        }
        return el;
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=0; i<n; i++){
        //     return nums[n/2];
        // }
        // return -1;
    }
};