class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1;
        int n = arr.size();
        int temp;
        for(int i=n-1; i>=0; i--){
            temp = maxi;
            if(arr[i]>maxi){
                maxi = arr[i];
            }
            arr[i]= temp;
        }
        return arr;
    }
};