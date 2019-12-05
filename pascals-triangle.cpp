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
	int numRows;
	cin>>numRows;

	vector<vector<int>> result;
	vector<int> temp;
	if(numRows<=0) return 0;
	for(int i=0;i<numRows;++i){
		if(i==0){
			temp.push_back(1);
			result.push_back(temp);
			temp.clear();
			continue;
		}
		for(int j=0;j<=i;++j){
			if(j==0||j==i) temp.push_back(1);
			else temp.push_back(result[i-1][j-1]+result[i-1][j]);
		}
		result.push_back(temp);
		temp.clear();
	}
	for(int i=0;i<result.size();++i){
		for(int j=0;j<result[i].size();++j){
			cout<<result[i][j];
		}
		cout<<endl;
	}
	cin.get();
	cin.get();
	return 0;
}
