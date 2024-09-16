class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            string Snum = to_string(nums[i]);
            if(Snum.length()%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};