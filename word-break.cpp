#include <iostream>
#include <ctime>
#include <vector>
#include <stack>
#include <cmath>
#include <map>
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
using std::queue;
using std::pair;
using std::string;
using std::unordered_map;
using std::sort;
using std::unordered_set;

void dfs(string &s,unordered_set<string> &Dict,int start,bool &flag,bool *marked){
	string temp;
	int size=s.size();
	for(int i=start;i<size;++i){
		temp+=s[i];
		if(Dict.find(temp)!=Dict.end()&&i==size-1) flag=true;
		else if(Dict.find(temp)!=Dict.end()&&!marked[i+1]) dfs(s,Dict,i+1,flag,marked);
		if(flag==true) break;
	}
	if(flag==false) marked[start]=true;
}

int main(){
	string s="leetcodecode";
	vector<string> wordDict;
	wordDict.push_back("leet");
	wordDict.push_back("code");

	unordered_set<string> Dict(wordDict.begin(),wordDict.end());
	bool *marked=new bool[s.size()];
	for(int i=0;i<s.size();++i)	marked[i]=false;
	bool flag=false;
	dfs(s,Dict,0,flag,marked);
	cout<<flag;

	cin.get();
	cin.get();
	return 0;
}
