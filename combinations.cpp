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

void dfs(int n,int k,int start,vector<vector<int>> &result,vector<int> &temp){
	for(int i=start;i<=n;++i){
		temp.push_back(i);
		if(temp.size()==k){
			result.push_back(temp);
			temp.pop_back();
			continue;
		}
		else if(n-i>=k-temp.size())dfs(n,k,i+1,result,temp);
		temp.pop_back();
	}
}

int main(){
	int n;
	int k;
	cin>>n;
	cin>>k;
	vector<vector<int>> result;
	vector<int> temp;
	dfs(n,k,1,result,temp);
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