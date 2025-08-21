class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ch;

        if(s.length() != t.length())
        {
            return false;
        }

        for(int i=0; i<s.length(); i++)
        {
            ch[s[i]]++;
            ch[t[i]]--;
        }
        for(auto it:ch)
        {
            if(it.second > 0)
            {
                return false;
            }
        }
        return true;

    }
};