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
void dfs(vector<int> &nums,vector<int> &temp,vector<vector<int>> &result,int start){
	result.push_back(temp);
	for(int i=start;i<nums.size();++i){
		temp.push_back(nums[i]);
		dfs(nums,temp,result,i+1);
		temp.pop_back();
	}
}
int main(){
	vector<int> nums;
	vector<vector<int>> result;
	vector<int> temp;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	dfs(nums,temp,result,0);
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
