class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numsFreq;
        for (int i = 0; i < nums.size(); i++){
            numsFreq[nums[i]]++;
        }
        vector<pair<int, int>> numsFreqVec(numsFreq.begin(), numsFreq.end());

        sort (numsFreqVec.begin(), numsFreqVec.end(), [](const auto& a, const auto& b){
           return a.second > b.second; 
        });

        vector <int> solution;
        for (int i = 0; i < k; i++){
            solution.push_back(numsFreqVec[i].first);
        }
        return solution;
    }
};
