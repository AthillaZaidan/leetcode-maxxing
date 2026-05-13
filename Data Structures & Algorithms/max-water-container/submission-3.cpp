class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector<int> maxArea;
        for (int i = 0; i < heights.size(); i++){
            for (int j = heights.size() - 1; j >= 0 && j > i; j--){
                if (heights[i] > heights[j]){
                    maxArea.push_back(heights[j] * (j - i));
                } else {
                    maxArea.push_back(heights[i] * (j - i));
                }
            }
        }

        sort(maxArea.begin(), maxArea.end());
        return maxArea.back();
    }
};
