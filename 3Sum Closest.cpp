#include <iostream>
#include <ctime>
#include <vector>
#include <stack>
#include <cmath>
#include <map>
#include <unordered_map>
#include <string>
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
using std::pair;
using std::string;
using std::unordered_map;
using std::sort;

int main(){
	vector<int> nums;
	int num[]={-1,2,1,-4};
	sort(num,num+sizeof(num)/sizeof(int));

	for(int i=0;i<sizeof(num)/sizeof(int);++i){
		cout<<num[i]<<endl;
		nums.push_back(num[i]);
	}
	int target=1;
	int aim=abs(target-nums[0]-nums[1]-nums[(sizeof(num)/sizeof(int))-1]);
	int result[]={nums[0],nums[1],nums[sizeof(num)/sizeof(int)-1]};
	for(int i=0;i+2<sizeof(num)/sizeof(int);++i){
		if(i>0&&nums[i]==nums[i-1]) continue;
		int j=i+1;
		int k=sizeof(num)/sizeof(int)-1;
		while(j<k){
			int temp=abs(target-nums[i]-nums[j]-nums[k]);
			if(temp>=aim&&target>nums[i]+nums[j]+nums[k]) j+=1;
			else if(temp>=aim&&target<nums[i]+nums[j]+nums[k]) k-=1;
			else if(temp<aim){
				aim=temp;
				result[0]=nums[i];
				result[1]=nums[j];
				result[2]=nums[k];
				j+=1;
				if(j<k&&nums[j]>nums[j-1]) j+=1;
			}
		}
	}

	for(int i=0;i<3;++i){
		cout<<result[i]<<endl;
	}

	cin.get();
	cin.get();
	return 0;
}