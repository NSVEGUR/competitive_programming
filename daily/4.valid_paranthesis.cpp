#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
		bool isValid(string s) {
				stack<char> stk;
				for(int i = 0; i < s.size(); i++){
					if(s[i] == '(' || s[i] == '{' || s[i] == '['){
						stk.push(s[i]);
					}else{
						if(stk.empty()){
							return false;
						}
						if(s[i] == ')' && stk.top() == '('){
							stk.pop();
						}else if(s[i] == ']' && stk.top() == '['){
							stk.pop();
						}else if(s[i] == '}' && stk.top() == '{'){
							stk.pop();
						}else{
							return false;
						}
					}
				}
				return stk.empty();
		}
};

int main(){
	string s;
	cout<<"Enter the string: "<<endl;
	cin>>s;
	Solution* obj = new Solution();
	cout<<obj->isValid(s)<<endl;;
	return 0;
}