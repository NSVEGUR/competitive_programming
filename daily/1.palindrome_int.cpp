#include<iostream>

using namespace std;

// Brute Force Approach

class Solution{
	public:
		bool isPalindrome(int x){
			string s = to_string(x);
			bool flag = true;
			for(int i = 0; i < s.length(); i++){
				if(s[i] != s[s.length()-i-1]){
					flag = false;
					break;
				}
			}
			return flag;
		}
};

// Optimized Approach

class Solution_Optimized{
	public:
		bool isPalindrome(int x){
			if(x < 0 || (x != 0 && x % 10 == 0)){
				return false;
			}
			int half = 0;
			while(x > half){
				half = half * 10 + x % 10;
				x /= 10;
			};
			return x == half || x == half/10;
		}
};