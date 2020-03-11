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
using std::sort;
using std::lower_bound;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}

int main(){
	vector<int> nums;
	nums.resize(6);
	nums[0]=0;
	nums[1]=1;
	nums[2]=3;
	nums[3]=6;
	nums[4]=2;
	nums[5]=5;
	int size=nums.size();

	int count=0;
	int total=0;
	for(int i=0;i<size;++i){
		total+=i+1;
		count+=nums[i];
	}
	cout<<total-count;
	
	cin.get();
	cin.get();
	return 0;
}
