#include <iostream>
#include <ctime>
#include <vector>
#include <stack>
#include <cmath>
#include <map>
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
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(100);
	int size=nums.size();
	if(size==0) return 0;
	if(size==1) return nums[0];
	
	int temp1=0;
	int temp2=0;
	int temp;
	for(int i=0;i<size-1;++i){
		temp=temp2;
		temp2=max(temp1+nums[i],temp2);
		temp1=temp;
	}
	int temp3=temp2;
	temp1=0;
	temp2=0;
	for(int i=1;i<size;++i){
		temp=temp2;
		temp2=max(temp1+nums[i],temp2);
		temp1=temp;
	}
	cout<<max(temp2,temp3);
	cin.get();
	cin.get();
	return 0;
}
