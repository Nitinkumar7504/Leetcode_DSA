#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        });

        int maxUnits = 0;
        for (const auto& boxType : boxTypes) {
            int boxes = min(truckSize, boxType[0]); 
            maxUnits += boxes * boxType[1];       
            truckSize -= boxes;                    

            if (truckSize == 0) break;          
        }
        return maxUnits;
    }
};
