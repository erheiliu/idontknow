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
void swap(vector<int> &nums,int i,int j){
	int temp=nums[i];
	nums[i]=nums[j];
	nums[j]=temp;
}

int main(){
	vector<int> nums;
	nums.push_back(0);
	nums.push_back(0);
	nums.push_back(0);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(3);
	nums.push_back(3);
	nums.push_back(3);
	nums.push_back(4);

	int size=nums.size();
	if(size<=2) return size;
	int i=0;
	for(int j=i+1;j<size;++j){
		if(nums[i]==nums[j]&&i==j-1){
			++i;
			while(j<size&&nums[i]==nums[j]) ++j;
		}else if(nums[i]==nums[j]){
			swap(nums,++i,j);
			if(j<size) ++j;
			while(j<size&&nums[i]==nums[j]) ++j;
		}
		if(j<size) swap(nums,++i,j);
	}
	cout<<i<<endl;
	for(int k=0;k<=i;++k){
		cout<<nums[k];
	}
	
	cin.get();
	cin.get();
	return 0;
}
