class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
        if(nums.size()>1){
        for(int i=0; i<zero; i++){
            nums[i]=0;
        }
        for(int i=zero; i<zero+one; i++){
            nums[i]=1;
        }
        for(int i=zero+one; i<nums.size(); i++){
            nums[i]=2;
        }
        }

        // for(int i=0; i<nums.size()-1; i++){
        //     int min=i;
        //     for(int j=i; j<nums.size(); j++){
        //         if(nums[j]<nums[min])
        //         {
        //             min = j;
        //         }
        //     }
        //     int temp = nums[i];
        //     nums[i] = nums[min];
        //     nums[min] = temp;
        // }
    }
};