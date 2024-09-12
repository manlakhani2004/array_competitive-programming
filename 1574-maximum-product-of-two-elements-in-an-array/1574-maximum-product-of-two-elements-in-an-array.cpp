class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int largest = -1;
     int value;
     for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(i!=j){
                value = (nums[i]-1)*(nums[j]-1);
                if(value > largest){
                    largest = value;
                }
            }
        }
     }   
     return largest;
    }
};