#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int kiri = 0;
        int kanan = heights.size() - 1;
        while (kiri < kanan){
            if (heights[kiri] < heights[kanan]){
                int area = heights[kiri] * (kanan-kiri);
                if (area > max) max = area;
                kiri++;
            } else {
                int area = heights[kanan] * (kanan - kiri);
                if (area > max) max = area;
                kanan--;
            }
        }
        return max;
    }
};
