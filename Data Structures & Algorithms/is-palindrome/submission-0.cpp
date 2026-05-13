class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for (char c : s){
            if (isalnum(c)){
                res += tolower(c);
            }
        }

        for (int i = 0; i < res.size(); i++){
            if (res[i] != res[res.size() - 1 - i]){
                return false;
            }
        }
        return true;
    }
};
