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
using std::unordered_map;
using std::sort;
using std::unordered_set;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}

int main(){
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(3);
	unordered_map<int,int> map;
	int size=nums.size();
	int result=0;
	for(int i=0;i<size;++i){
		map[nums[i]]=map[nums[i]]+1;
		if(map[nums[i]]>size/2){
			result=nums[i];
			break;
		}
	}
	cout<<result;
	cin.get();
	cin.get();
	return 0;
}
