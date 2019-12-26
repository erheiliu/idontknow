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
	int size=4;
	nums.resize(size);
	nums[0]=2;
	nums[1]=7;
	nums[2]=11;
	nums[3]=15;
	//nums[2]=2;
	int target=13;

	vector<int> result;
	if(size<2) return 0;
	for(int i=0;i<size-1;++i){
		int temp=target-nums[i];
		if(temp<nums[i]) break;
		result.push_back(i+1);
		int lo=i+1;int hi=size;
		while(lo<hi){
			int mid=lo+(hi-lo)/2;
			if(nums[mid]<temp) lo=mid+1;
			else if(nums[mid]>temp) hi=mid;
			else {
				result.push_back(mid+1);
				break;
			}
		}
		if(result.size()==2) break;
		else result.pop_back();
	}
	for(int i=0;i<result.size();++i){
		cout<<result[i];
	}

	cin.get();
	cin.get();
	return 0;
}
