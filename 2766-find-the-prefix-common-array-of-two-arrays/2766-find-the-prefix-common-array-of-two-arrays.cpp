class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int count=0;
        int flg;
        vector<int> C;
        for(int i=0; i<A.size(); i++){
            count =0;
            for(int j=0; j<=i; j++){
                flg =0;
                for(int x=0; x<=i; x++){
                    if(A[j]==B[x]){
                        flg=1;
                    }
                }
                if(flg==1){
                    count++;
                }
            } 
            C.push_back(count);
        }
        return C;
    }

};