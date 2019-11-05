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
	int val=3;
	//nums.push_back(3);
	//nums.push_back(3);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(3);
	if(nums.size()==1&&nums[0]!=val){
		cout<<1;
		return 1;
	}
	int i=0;int j=nums.size()-1;

	while(i<=j){
		if(nums[i]==val){
			nums[i]=nums[j];
			nums[j]=val;
			j--;
		}else ++i;
	}
	cout<<'i'<<i<<endl;
	for(int k=0;k<i;++k){
		cout<<nums[k]<<endl;
	}
	cin.get();
	cin.get();
	return 0;
}