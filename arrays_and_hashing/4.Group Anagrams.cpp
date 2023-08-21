#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
			unordered_map<string, vector<string>> str_map;
			for(string x: strs){
				string word = x;
				sort(word.begin(), word.end());
				str_map[word].push_back(x);
			}
			vector<vector<string>> ans;
			for(auto x: str_map){
				ans.push_back(x.second);
			}
			return ans;
    }
};