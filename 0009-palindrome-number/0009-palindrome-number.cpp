class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string temp = str;
        reverse(str.begin(),str.end());
        if(str == temp){
            return true;
        }
        return false;
    }
};