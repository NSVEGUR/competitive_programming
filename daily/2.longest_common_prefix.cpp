#include<iostream>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if(strs.size() <= 0){
            return prefix;
        }
        sort(strs.begin(), strs.end());
        string first = strs[0], last = strs[strs.size()-1];
        for(int i = 0; i < min(first.size(), last.size()); i++){
            if(first[i]!=last[i]){
                return prefix;
            }
            prefix+=first[i];
        }
        return prefix;
    }
};

int main(){
    Solution sol;
    vector<string> strs;
    int n;
    cout<<"Enter the length of vector: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        string str;
        cout<<"Enter the string "<<i+1<<" :";
        cin>>str;
        strs.push_back(str);
    }
    string prefix = sol.longestCommonPrefix(strs);
    cout<<"Prefix is: "<<prefix<<endl;
    return 0;
}