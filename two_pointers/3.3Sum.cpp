#include<iostream>
#include<vector>
#include<set>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
				sort(nums.begin(), nums.end());
				set<vector<int>> output;
        for(int i = 0; i < nums.size(); ++i){
					int j = i + 1;
					int k = nums.size() - 1;
					while(j < k){
						int sum = nums[i] + nums[j] + nums[k];
						if(sum == 0){
							output.insert({nums[i], nums[j], nums[k]});
							j++;
							k--;
						}else if(sum > 0){
							k--;
						}else{
							j++;
						}	
					}
				}
				vector<vector<int>> ans;
				for(auto x: output){
					ans.push_back(x);
				}
				return ans;
		}
};

int main(){
	set<vector<int>> s;
	s.insert({1, 2, 3});
	s.insert({2, 3, 1});
	s.insert({1, 2, 3, 1});
	for(auto vec: s){
		for(int x: vec){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}