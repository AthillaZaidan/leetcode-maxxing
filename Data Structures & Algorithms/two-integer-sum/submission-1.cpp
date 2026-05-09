class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> hasil;
        for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    hasil.push_back(i);
                    hasil.push_back(j);
                    return hasil;
                }
            }
        }
    }
};
