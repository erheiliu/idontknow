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
	int n;
	cin>>n;
	vector<int> result;
	int temp=1;

	result.push_back(0);
	if(n==0){
		return 0;
	}
	result.push_back(1);
	for(int i=1;i<n;++i){
		temp*=2;
		int size=result.size();
		for(int j=size-1;j>=0;--j){
			result.push_back(result[j]+temp);
		}
	}
	for(int i=0;i<result.size();++i){
		cout<<result[i]<<endl;
	}


	cin.get();
	cin.get();
	return 0;
}
