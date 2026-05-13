class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int, int> mp;
        set<vector<int>> res;
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }   

        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                int need = 0 - nums[i] - nums[j];

                if (!mp.count(need)) continue;

                int neededCount = 1;

                if (need == nums[i]) neededCount++;
                if (need == nums[j]) neededCount++;

                if (mp[need] >= neededCount){
                    vector<int> triplets = {nums[i], nums[j], need};
                    sort(triplets.begin(), triplets.end());
                    res.insert(triplets);
                }
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};
