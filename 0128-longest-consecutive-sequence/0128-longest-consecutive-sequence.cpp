class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    //     unordered_set<int> arr;
    //     int largest = 0;
    //     int cnt=0;
    //     for(int i=0; i<nums.size(); i++){
    //         arr.insert(nums[i]);
    //     }

    //     for(auto it:arr){
    //         if(arr.find(it-1) == arr.end()){
    //             cnt = 0;
    //             while(arr.find(it) != arr.end()){
    //                 cnt++;
    //                 it++;
    //             }
    //         }
    //         largest = max(largest,cnt);
    //     }

    // return largest;

    int largest =0;
    int last_num = INT_MIN;
    int count =0;
    sort(nums.begin(),nums.end());

    for(int i=0; i<nums.size(); i++){
        if(nums[i]-1 == last_num){
            count++;
            last_num = nums[i];
        }else if(nums[i] != last_num){
            count = 1;
            last_num = nums[i];
        }
        largest = max(largest,count);
    }
    return largest;
    }
};