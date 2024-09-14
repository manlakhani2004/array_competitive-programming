class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int x =0;
        int y=0;
        int n=nums.size();
        int num;
        for(int i=0; i<n; i++){
            //sum element
            x+=nums[i];

            //sum digit of element
            num = nums[i];
            while(num>0){
                int ld = num%10;
                y+=ld;
                num/=10;
            }
        }
        return abs(x-y);
    }
};