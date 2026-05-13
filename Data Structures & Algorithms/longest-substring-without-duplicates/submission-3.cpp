class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> charSet;
        int res = 0;
        int l = 0;
        for (int i = 0; i < s.size(); i++){
            while(charSet.contains(s[i])){
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[i]);
            res = max(res, i - l + 1);
        }
        return res;
    }
};
