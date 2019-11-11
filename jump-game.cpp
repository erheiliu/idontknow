#include <iostream>
#include <ctime>
#include <vector>
#include <stack>
#include <cmath>
#include <map>
#include <unordered_map>
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
using std::queue;
using std::pair;
using std::string;
using std::unordered_map;
using std::sort;


int main(){

	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(0);
	if(nums.empty()) return false;
	bool result=false;
	int left=nums.size()-1;
	for(int i=nums.size()-1;i>=0;--i){
		if(nums[i]+i>=left) left=i;
	}
	if(left==0) result=true;
	cout<<result;
	cin.get();
	cin.get();
	return 0;
}