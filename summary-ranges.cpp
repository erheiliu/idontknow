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
//using std::strlen;
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

inline string getstr(int num){
	string temp;
	if(num<0){
		temp+='-';

	}
}

int main(){
	vector<int> nums;
	nums.push_back(-2147483648);
	nums.push_back(-2147483647);
	nums.push_back(2147483647);

	vector<string> result;
	int size=nums.size();
	for(int i=0;i<size;++i){
		string temp;
		temp=std::to_string(static_cast<long long>(nums[i]));
		int j=i;
		while(j+1<size&&nums[j+1]==nums[j]+1) ++j;
		if(j>i) {
			temp+="->";
			temp+=std::to_string(static_cast<long long>(nums[j]));
			i=j;
		}
		result.push_back(temp);
	}
	for(int i=0;i<result.size();++i){
		cout<<result[i]<<" ";
	}
	cin.get();
	cin.get();
	return 0;
}
