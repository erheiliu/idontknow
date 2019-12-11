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
inline bool cmp(int val1,int val2){
	return val1<val2?true:false;
}

int main(){
	vector<int> prices;
	prices.push_back(7);
	//prices.push_back(6);
	//prices.push_back(5);
	//prices.push_back(3);
	//prices.push_back(6);
	//prices.push_back(9);
	int size=prices.size();
	int max=0;
	int min;
	for(int i=0;i<size-1;++i){
		if(i==0||cmp(prices[i],min)){
			min=prices[i];
		}else continue; 
		for(int j=i+1;j<size;++j){
			if(!cmp(prices[j]-prices[i],max)) max=prices[j]-prices[i];
		}
	}
	cout<<max;
	cin.get();
	cin.get();
	return 0;
}
