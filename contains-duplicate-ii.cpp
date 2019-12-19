#include <iostream>
#include <ctime>
#include <vector>
#include <stack>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <queue>
#include <algorithm>
#include "solution.h"
using std::cin;
using std::cout;
using std::endl;
using std::srand;
using std::rand;
using std::stack;
using std::vector;
using std::pow;
using std::string;
using std::strlen;
using std::map;
using std::set;
using std::queue;
using std::pair;
using std::string;
using std::unordered_map;
using std::sort;
using std::unordered_set;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}

int main(){
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	int k=2;
	bool result=false;
	int size=nums.size();
	if(k>size-1) return result;
	unordered_map<int,int> heap;

	for(int i=0;i<size;++i){
		if(heap.find(nums[i])!=heap.end()&&abs(i-heap[nums[i]])<=k){
			result=true;
			break;
		}
		else heap[nums[i]]=i;
	}
	cout<<result;
	cin.get();
	cin.get();
	return 0;
}
