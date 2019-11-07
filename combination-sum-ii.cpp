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

void dfs(vector<vector<int>> &result,vector<int> &candidates,vector<int> temp,int target,int begin,int total){
	for(int i=begin;i<candidates.size();++i){
		temp.push_back(candidates[i]);
		if(total+temp.back()==target){
			result.push_back(temp);
		}
		else if(total+temp.back()<target){
			dfs(result,candidates,temp,target,i+1,total+temp.back());
		}
		temp.pop_back();
		while(i+2<candidates.size()&&candidates[i]==candidates[i+1]) ++i;
	}
}
int main(){
	vector<vector<int>> result;
	vector<int> candidates;
	vector<int> temp;
	int target;
	cin>>target;
	candidates.push_back(10);
	candidates.push_back(1);
	candidates.push_back(2);
	candidates.push_back(7);
	candidates.push_back(6);
	candidates.push_back(1);
	candidates.push_back(5);
	sort(candidates.begin(),candidates.end());
	dfs(result,candidates,temp,target,0,0);
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