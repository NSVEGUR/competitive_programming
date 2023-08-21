#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size() - 1; ++i){
            for(int j = i+1; j < nums.size(); ++j){
                if(nums[i]+nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
		vector<int> twoSum2(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
				for(int i = 0; i < nums.size(); ++i){
					num_map[nums[i]] = i;
				}
				for(int i = 0; i < nums.size(); ++i){
					int rem = target - nums[i];
					if(num_map.count(rem)){
						int j = num_map[rem];
						if(i != j){
							return {i, j};
						}
					}
				}
				return {-1, -1};
    }
};