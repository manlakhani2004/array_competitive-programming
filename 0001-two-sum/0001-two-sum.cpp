class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int nm = nums[i];
            //find second number that required
            int more = target-nm;

            //check required number is exits in map
            if(mpp.find(more) != mpp.end())
            {
                ans.push_back(i);
                ans.push_back(mpp[more]);
                return ans; 
            }

            //if number not exist in map then add in map
            mpp[nm] = i;
        }
        return ans;
        // int x,y;
        // bool flg = false;
        // for(int i = 0; i < nums.size()-1; i++){
        //     x = i;
        //     for(int j = i+1; j < nums.size(); j++){
        //       y = j;
        //       if(nums[i]+nums[j] == target){
        //           flg = true;
        //           break;
        //       }
        //     }
        //     if(flg){ break; }
        // }
        //  vector<int> snd;
        //  snd.push_back(x);
        //  snd.push_back(y);
        //  return snd;
        // }
    }
};