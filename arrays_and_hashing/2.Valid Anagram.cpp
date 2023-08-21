#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
		bool isAnagram2(string s, string t){
				unordered_map<char, int> count;
				for(char x: s)
					count[x]++;
				for(char x: t)
					count[x]--;
				for(auto x: count){
					if(x.second != 0){
						return false;
					}
				}
				return true;
		}
};

int main(){
	Solution sol = Solution();
	cout<<sol.isAnagram2("", "")<<endl;
	return 0;
}