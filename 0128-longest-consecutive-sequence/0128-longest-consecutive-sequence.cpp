class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> arr;
        int largest = 0;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            arr.insert(nums[i]);
        }

        for(auto it:arr){
            if(arr.find(it-1) == arr.end()){
                cnt = 0;
                while(arr.find(it) != arr.end()){
                    cnt++;
                    it++;
                }
            }
            largest = max(largest,cnt);
        }

    return largest;
    }
};