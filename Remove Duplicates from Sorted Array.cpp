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
	vector<int> result;
	result.push_back(1);
	result.push_back(1);
	result.push_back(2);

	int cur=result[0];
	int j=1;
	for(int i=1;i<result.size();++i){
		while(i<result.size()&&cur==result[i]) i+=1;
		if(i<result.size()){
			cur=result[i];
		    result[j]=result[i];
		    j+=1;
		}
	}
	cout<<j<<endl;
	for(int k=0;k<j;++k){
		cout<<result[k];
	}
	cin.get();
	cin.get();
	return 0;
}