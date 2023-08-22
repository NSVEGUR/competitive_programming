#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>

using namespace std;

class Solution{
	public:
	static bool cmp(pair<int, int>& a, pair<int, int>& b){
		return a.second > b.second;
	}

	vector<int> topKFrequent(vector<int> &nums, int k){
		unordered_map<int, int> count;
		for(int x: nums){
			count[x]++;
		};
		vector<pair<int, int>> vec;
		for(auto x: count){
			vec.push_back(make_pair(x.first, x.second));
		}
		sort(vec.begin(), vec.end(), cmp);
		vector<int> top;
		for(int i = 0; i < vec.size(); ++i){
			if(i == k - 1){
				break;
			}
			top.push_back(vec[i].first);
		}
		return top;
	}
};

int main(){
	Solution sol = Solution();
	vector<int> nums = {4,1,-1,2,-1,2,3};
	vector<int> vec = sol.topKFrequent(nums, 2);
	cout<<"Vec"<<endl;
	for(int x: vec){
		cout<<x<<endl;
	}
	return 0;
}