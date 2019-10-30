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

void dfs(string num,string temp,vector<string> &result,unordered_map<char,string> base,int i){
	if(num.size()==temp.size()){
		result.push_back(temp);
		return;
	}
	for(int j=0;j<base[num[i]].size();++j){
		temp+=base[num[i]][j];
		dfs(num,temp,result,base,i+1);
		temp.pop_back();
	}
	return;
}

int main(){
	string nums;
	cin>>nums;
	unordered_map<char,string> base;
	base['2']="abc";base['3']="def";base['4']="ghi";base['5']="jkl";base['6']="mno";base['7']="pqrs";base['8']="tuv";base['9']="wxyz";
	string temp="";
	vector<string> result;
	dfs(nums,temp,result,base,0);
	for(auto it=result.begin();it!=result.end();++it){
		cout<<*it<<endl;
	}
	result.clear();
	cin.get();
	cin.get();
	return 0;
}