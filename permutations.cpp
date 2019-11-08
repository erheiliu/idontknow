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

void dfs(vector<vector<int>> &result,vector<int> &temp,vector<int> &nums,bool* &marked){
	if(temp.size()==nums.size()) {
		result.push_back(temp);
		return;
	}
	for(int i=0;i<nums.size();++i){
		if(!*(marked+i)){
			*(marked+i)=true;
			temp.push_back(nums[i]);
			dfs(result,temp,nums,marked);
			*(marked+i)=false;
		    temp.pop_back();
		}
	}
}
int main(){
	vector<vector<int>> result;
	vector<int> temp;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	//nums.push_back(5);
	bool *marked=new bool[nums.size()];
	for(int i=0;i<nums.size();++i){
		marked[i]=false;
	}
	dfs(result,temp,nums,marked);
	for(int i=0;i<result.size();++i){
		for(int j=0;j<result[i].size();++j){
			cout<<result[i][j];
		}
		cout<<endl;
	}
	delete[] marked;
	cin.get();
	cin.get();
	return 0;
}