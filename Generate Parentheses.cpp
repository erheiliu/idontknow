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

void dfs(vector<string> &result,int size,string str,int n){
	if(str.size()==2*n){
		result.push_back(str);
		str.clear();
		return;
	}
	if(str.size()==0){
		str+='(';
		size++;
	}
	if(size==0)	dfs(result,size+1,str+'(',n);
	else if(size!=0&&size+str.size()<2*n){
		dfs(result,size+1,str+'(',n);
		dfs(result,size-1,str+')',n);
	}
	else if(size!=0&&size+str.size()==2*n)	dfs(result,size-1,str+')',n);
}
int main(){
	vector<string> result;
	dfs(result,0,"",0);
	for(int i=0;i<result.size();++i){
		cout<<result[i]<<endl;
	}
	result.clear();
	cin.get();
	cin.get();
	return 0;
}