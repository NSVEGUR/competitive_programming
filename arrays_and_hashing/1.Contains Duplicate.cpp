#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(), nums.end()).size();
    }
    // Using Hash Set
    bool containsDuplicate2(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num: nums){
            if(seen.count(num) > 0){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
    // Using Hash Map
    bool containsDuplicate3(vector<int>& nums) {
        unordered_map<int, int> seen;
        for(int num: nums){
            if(seen[num] >= 1)
                return true;
            seen[num]++;
        }
        return false;
    }
};