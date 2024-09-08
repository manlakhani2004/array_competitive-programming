class Solution {
public:
    string reverse(string str){
        int n = str.size();
        int i=0,j=n-1;
        while(i<=j){
            str[i]=str[j];
            i++;
            j--;
        }
        return str;
    }
    string firstPalindrome(vector<string>& words) {
        string temp;
        for(int i=0; i<words.size(); i++){
            temp = reverse(words[i]);
            if(temp == words[i]){
                return words[i];
            }
        }
        return "";
    }
};