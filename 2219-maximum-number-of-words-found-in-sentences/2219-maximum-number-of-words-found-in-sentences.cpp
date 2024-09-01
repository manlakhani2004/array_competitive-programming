#include <bits/stdc++.h>
#include <cstdio>
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> ans;
        for(int i=0; i<sentences.size(); i++)
        {
            string str = sentences[i];
            stringstream ss(str);
            string token;
            vector<string> tokens;

            while (getline(ss, token, ' ')) {
                tokens.push_back(token);
            }
            ans.push_back(tokens.size());
         }             
        return *max_element(ans.begin(),ans.end());    
    }
};