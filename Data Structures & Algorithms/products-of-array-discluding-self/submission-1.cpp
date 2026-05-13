class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> solution;
        int prod = 1;
        int zeroCount = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                zeroCount ++;
            } else {
                prod *= nums[i];
            }
        }

        if (zeroCount >= 2){
            vector<int> v (nums.size(), 0);
            return v;
        } 
        if (zeroCount == 1){
            for (int i = 0; i < nums.size(); i++){
                if (nums[i] == 0){
                    solution.push_back(prod);
                } else {
                    solution.push_back(0);
                }
            }
            return solution;
        }

        for (int i = 0; i < nums.size(); i++){
            solution.push_back(prod / nums[i]);
        }
        return solution;
    }
};
