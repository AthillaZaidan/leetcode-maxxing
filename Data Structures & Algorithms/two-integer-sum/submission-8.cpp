class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hashNums;

        for (int i = 0; i < nums.size(); i++){
            hashNums.insert({nums[i], i});
        }

        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if (hashNums.find(diff) != hashNums.end() && hashNums[diff] != i){

                if (i < hashNums.find(diff)->second){
                    return {i, hashNums.find(diff)->second};
                }
                return {hashNums.find(diff)->second, i};
            }
        }
        return {};
    } 
};