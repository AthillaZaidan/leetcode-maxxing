class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++){
            umap[nums[i]]++;
        }

        vector<pair<int, int>> vecNums;

        for (auto i : umap){
            vecNums.push_back({i.second, i.first});
        }


        sort(vecNums.begin(), vecNums.end(), greater<pair<int, int>>());
        vector<int> sol;
        for (int i = 0; i < k; i++){
            sol.push_back(vecNums[i].second);
        }
        return sol;
    }
};
