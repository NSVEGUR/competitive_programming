#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> count;
        for(int x: nums){
            count.insert(x);
        }
        int longest = 0;
        for(int num: nums){
            if(count.find(num-1) == count.end()){
                int current = num;
                int currentLongest = 1;
                while(count.find(++current) != count.end()){
                    currentLongest++;
                }
                longest = max(longest, currentLongest);
            }
        }
        return longest;
    }
};