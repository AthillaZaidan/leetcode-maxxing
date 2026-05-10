class Solution {
public:

    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
        for (int i = 0; i < s.size(); i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }

        return smap == tmap;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // cari dulu yang anagram?
        // masukin ke dalam sebuah vector
        // loop selesai masukin dia ke solution

        vector<vector<string>> anagrams;
        vector<bool> visited(strs.size(), false);
        for (int i = 0; i < strs.size(); i++) {

            if (visited[i]) {
                continue;
            }
            vector<string> subsol;
            string now = strs[i];
            subsol.push_back(now);

            visited[i] = true;

            for (int j = i + 1; j < strs.size(); j++) {
                if (!visited[j] && isAnagram(now, strs[j])) {
                    subsol.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            anagrams.push_back(subsol);
        }

        return anagrams;
    }
};
