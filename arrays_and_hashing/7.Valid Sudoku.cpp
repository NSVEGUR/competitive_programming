#include<iostream>
#include<vector>
#include<unordered_map>


using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
			for(int i = 0; i < 9; ++i){
				unordered_map<char, int> row, col, box;
				for(int j = 0; j < 9; ++j){
					char x = board[i][j];
					if(x != '.'){
						row[x]++;
					}
					x = board[j][i];
					if(x != '.'){
						col[x]++;
					}
					x = board[j/3+((i/3)*3)][j%3+((i*3)%9)];
					if(x != '.'){
						box[x]++;
					}
				}
				for(auto x: row){
					if(x.second > 1){
						return false;
					}
				}
				for(auto x: col){
					if(x.second > 1){
						return false;
					}
				}
				for(auto x: box){
					if(x.second > 1){
						return false;
					}
				}
			}
			return true;
    }
};

int main(){
	// vector<vector<char>> board
	// {
	// {'5','3','.','.','7','.','.','.','.'}
	// ,{'6','.','.','1','9','5','.','.','.'}
	// ,{'.','9','8','.','.','.','.','6','.'}
	// ,{'8','.','.','.','6','.','.','.','3'}
	// ,{'4','.','.','8','.','3','.','.','1'}
	// ,{'7','.','.','.','2','.','.','.','6'}
	// ,{'.','6','.','.','.','.','2','8','.'}
	// ,{'.','.','.','4','1','9','.','.','5'}
	// ,{'.','.','.','.','8','.','.','7','9'}
	// };
	// Solution sol = Solution();
	// cout<<sol.isValidSudoku(board)<<endl;
	for(int i = 0; i < 9; ++i){
		for(int j = 0; j < 9; ++j){
			cout<<j/3+((i/3)*3)<<" "<<j%3+((i*3)%9)<<endl;
		}
	}
	return 0;
}