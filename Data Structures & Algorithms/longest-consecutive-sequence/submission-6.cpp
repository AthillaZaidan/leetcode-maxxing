class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        map<int, int> hash;

        for (int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }

        int sol = 1;
        int curr = 1;

        for (auto i = hash.begin(); next(i) != hash.end(); i++){
            if (next(i)->first - i->first == 1){
                curr++;
                sol = max(sol, curr);
            } else {
                curr = 1;
            }
        }

        return sol;
    }
};