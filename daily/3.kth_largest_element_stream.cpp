#include<iostream>
#include<vector>
#include<queue>
using namespace std;


// Basic Approach
class KthLargest {
public:
		int k;
		vector<int> nums;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
				this->nums = nums;
    }
    
    int add(int val) {
			nums.push_back(val);
			sort(nums.rbegin(), nums.rend());
			return nums[k-1];
    }
};

//Using Priority queue
class KthLargestPriority{
	public:
		int k;
		priority_queue<int, vector<int>, greater<int>> pq;
		KthLargestPriority(int k, vector<int>& nums): k(k){
				for(int x: nums){
					pq.push(x);
					if(pq.size() > k){
						pq.pop();
					}
				}
		}
		int add(int val){
			pq.push(val);
			if(pq.size() > k){
				pq.pop();
			}
			return pq.top();
		}
};

int main(){
	vector<int> nums = {4, 5, 8, 2};
	KthLargest *obj = new KthLargest(3, nums);
	cout<<obj->add(3)<<endl;
	cout<<obj->add(5)<<endl;
	cout<<obj->add(10)<<endl;
	cout<<obj->add(9)<<endl;
	cout<<obj->add(4)<<endl;
	return 0;
}