#include <bits/stdc++.h>
#include <cstdio>
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        // vector<int> ans;
        // for(int i=0; i<sentences.size(); i++)
        // {
        //     string str = sentences[i];
        //     stringstream ss(str);
        //     string token;
        //     vector<string> tokens;

        //     while (getline(ss, token, ' ')) {
        //         tokens.push_back(token);
        //     }
        //     ans.push_back(tokens.size());
        //  }             
        // return *max_element(ans.begin(),ans.end()); 
        vector<int> ans;
        for(int i=0; i<sentences.size(); i++){
            int count =1;
            for(int j=0; j<sentences[i].size(); j++)
            {
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            ans.push_back(count);
        }   
        return *max_element(ans.begin(),ans.end()); 
    }
};