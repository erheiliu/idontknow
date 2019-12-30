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

inline int min(int val1,int val2){
	return val1<val2?val1:val2;
}

int main(){
	int nums;
	cin>>nums;
	vector<int> result;
	result.resize(nums+1);
	result[0]=0;
	//if(nums==0) return result;
	result[1]=1;
	int pos=1;
	for(int i=2;i<nums+1;++i){
		if(i-pos==pos){
			result[i]=1;
			pos=i;
		}else result[i]=result[i-pos]+1;
	}
	for(int i=0;i<nums+1;++i){
		cout<<result[i]<<" ";
	}
	cin.get();
	cin.get();
	return 0;
}
