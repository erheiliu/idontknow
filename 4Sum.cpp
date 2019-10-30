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
	int nums[]={1,0,-1,0,0,0,-2,2};
	sort(nums,nums+sizeof(nums)/sizeof(int));
	for(int i=0;i<sizeof(nums)/sizeof(int);++i){
			cout<<nums[i];
		}
	cout<<endl;
	vector<int*> result;
	int target=0;
	for(int i=0;i+3<sizeof(nums)/sizeof(int);++i){
		if(i>0&&nums[i]==nums[i-1])	continue;
		int tar1=target-nums[i];
		for(int j=i+1;j+2<sizeof(nums)/sizeof(int);++j){
			if(j>i+1&&nums[j]==nums[j-1]) continue;
			int m=j+1;
			int n=sizeof(nums)-1;
			int tar2=tar1-nums[j]; 
			while(m<n){
				if(nums[m]+nums[n]<tar2) m+=1;
				else if(nums[m]+nums[n]>tar2) n-=1;
				else{
					int* temp=new int[4];
					temp[0]=nums[i];
					temp[1]=nums[j];
					temp[2]=nums[m];
					temp[3]=nums[n];
					result.push_back(temp);
					m+=1;n-=1;
					while(m<n&&m>j+1&&nums[m]==nums[m-1]) m+=1;
				    while(m<n&&n<sizeof(nums)-1&&nums[n]==nums[n+1]) n-=1;
				}
				
			}
		}

	}
	for(auto it=result.begin();it!=result.end();++it){
		for(int i=0;i<4;++i){
			cout<<*((*it)+i);
		}
		cout<<endl;
		delete[] *it;
	}
	cin.get();
	cin.get();
	return 0;
}