class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> v;
        for (int i = 0; i < position.size(); i++){
            v.push_back({position[i], speed[i]});
        }
        sort(v.rbegin(), v.rend());
        int fleet = 0;
        double lastTime = 0;
        for (auto [pos, spd] : v){
            double time = (double)(target - pos) / spd;

            if (time > lastTime){
                fleet++;
                lastTime = time;
            }
        } 

        return fleet;
    }
};
