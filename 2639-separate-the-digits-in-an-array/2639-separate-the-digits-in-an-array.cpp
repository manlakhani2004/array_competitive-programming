class Solution {
public:
    
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int ld;
        for(int i=0; i<nums.size(); i++){
            vector<int> temp;
            int nm = nums[i];
            while(nm>0){
                int last = nm%10;
                temp.push_back(last);
                nm/=10;
            }
            for(int j=temp.size()-1; j>=0; j--)
            {
                ans.push_back(temp[j]);
            }
        }  
        return ans;
    }
};