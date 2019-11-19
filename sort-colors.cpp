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
	nums.push_back(2);
	nums.push_back(0);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(0);
	int lo=-1;
	int hi=nums.size()-1;
	for(int i=0;i<=hi;++i){
		if(nums[i]==0) swap(nums,i,++lo);
		else if(nums[i]==2) swap(nums,i--,hi--);
	}
	for(int i=0;i<nums.size();++i){
		cout<<nums[i];
	}
	cin.get();
	cin.get();
	return 0;
}