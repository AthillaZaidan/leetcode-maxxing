class Solution {
public:
    int findMin(vector<int> &nums) {
        int mins = nums[0];   
        for (int i = 1; i < nums.size(); i++){
            mins = min(mins, nums[i]);
        }
        return mins;
    }
};
