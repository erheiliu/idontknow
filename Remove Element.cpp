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
	nums.push_back(3);
	nums.push_back(3);
	nums.push_back(2);
	//nums.push_back(3);
	if(nums.size()<2) {
		cout<<nums.size();
		cin.get();
	    return nums.size();
	}
	int i=0;int j=NULL;
	for(i=0;i<nums.size();++i){
		if(nums[i]==val){
			j=i+1;
			break;
		}
	}
	if(i==nums.size()) return nums.size();
	while(j<nums.size()){
		if(nums[j]==val) j++;
		else{
			int temp=nums[j];
			nums[j]=nums[i];
			nums[i]=temp;
			i++;
			j++;
		}
	}
	for(int k=0;k<i;++k){
		cout<<nums[k]<<endl;
	}
	cin.get();
	cin.get();
	return 0;
}