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
using std::string;
using std::unordered_map;
using std::sort;
using std::unordered_set;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}
void dfs(vector<vector<int>> &result,vector<int> &temp,int start,int k,int n){
	for(int i=start;i<=10-k;++i){
		temp.push_back(i);
		if(k==1&&n-i==0){
			result.push_back(temp);
			temp.pop_back();
			return;
		}
		if(k-1>0) dfs(result,temp,i+1,k-1,n-i);
		temp.pop_back();
	}
}

int main(){
	vector<vector<int>> result;
	int k;
	cin>>k;
	int n=7;
	cin>>n;
	if(k>9) return 0;

	vector<int> temp;
	dfs(result,temp,1,k,n);
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
