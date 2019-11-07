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
void dfs(vector<vector<int>> &result,vector<int> &candi,vector<int> temp,int target,int begin,int total){
	for(int i=begin;i<candi.size();++i){
		temp.push_back(candi[i]);
		if(total+candi[i]==target)	result.push_back(temp);
		else if(total+candi[i]<target)	dfs(result,candi,temp,target,i,total+candi[i]);
		temp.pop_back();
	}
}

int main(){
	vector<vector<int>> result;
	vector<int> candidates;
	vector<int> temp;
	int target;
	int total=0;
	cin>>target;
	candidates.push_back(2);
	candidates.push_back(3);
	candidates.push_back(6);
	candidates.push_back(7);

	dfs(result,candidates,temp,target,0,total);
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