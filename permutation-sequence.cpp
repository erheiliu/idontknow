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

void dfs(const string &str,string &result,bool* &marked,int n,int k,int &t){
	for(int i=0;i<n;++i){
		if(marked[i]) continue;
		result+=str[i];
		marked[i]=true;
		if(result.size()<n) dfs(str,result,marked,n,k,t);
		else ++t;
		if(t==k) break;
		marked[i]=false;
		result.pop_back();
	}
}
int main(){
	string str="123456789";
	int n;
	int k;
	int t=0;
	cin>>n;
	cin>>k;
	bool *marked=new bool[n];
	for(int i=0;i<n;++i){
		*(marked+i)=false;
	}
	string result="";
	dfs(str,result,marked,n,k,t);
	cout<<result;
	delete[] marked;
	cin.get();
	cin.get();
	return 0;
}