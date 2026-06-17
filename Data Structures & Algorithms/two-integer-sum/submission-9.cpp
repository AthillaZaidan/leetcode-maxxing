class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++){
            umap.insert({nums[i], i});
        }

        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];

            if (umap.find(diff) != umap.end() && umap[diff] != i){
                if (umap[diff] < i){
                    return {umap[diff], i};
                } 
                return {i, umap[diff]};
            }
        }
        return {};

    } 
};