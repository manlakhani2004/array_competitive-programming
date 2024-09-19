class Solution {
public:
    int findLucky(vector<int>& arr) {
        set<int> u_num;
        vector<int> mx_num;
        int flg = 0;
        for(int i=0; i<arr.size(); i++)
        {
            u_num.insert(arr[i]);
        }
        int cnt;
        int lt = -1;
        for(auto i:u_num){
            cnt=0;
            for(int j=0; j<arr.size(); j++){
                if(i==arr[j]){
                    cnt++;

                }
            }
            if(cnt==i){
                    mx_num.push_back(i);
                    flg =1;
            }
        }
        if(flg==1){
            return *max_element(mx_num.begin(),mx_num.end());
        }
        return -1;
    }
};