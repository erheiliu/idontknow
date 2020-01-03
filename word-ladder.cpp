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
using std::unordered_map;
using std::sort;
using std::unordered_set;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}

inline bool check(string &a,string &b){
	int i=0;
	int size=a.size();
	int refer=0;
	while(i<size){
		if(a[i]!=b[i]) ++refer;
		if(refer>1) return false;
		++i;
	}
	return true;
}

int main(){
	vector<string> wordlist;
	wordlist.push_back("hot");
	wordlist.push_back("dot");
	wordlist.push_back("dog");
	wordlist.push_back("lot");
	wordlist.push_back("log");
	wordlist.push_back("cog");
	string beginword="hit";
	string endword="cog";

	int result=0;
	int size=wordlist.size();
	int* marked=new int[size];
	for(int i=0;i<size;++i){
		marked[i]=false;
	}
	string last=beginword;
	queue<string> strlist;
	strlist.push(beginword);
	while(!strlist.empty()){
		string temp=strlist.front();
		strlist.pop();
		if(temp==endword){
			++result;
			break;
		}
		for(int i=0;i<size;++i){
			if(!marked[i]&&check(wordlist[i],temp)){
				strlist.push(wordlist[i]);
				marked[i]=true;
			}
		}
		if(temp==last&&!strlist.empty()){
			++result;
			last=strlist.back();
		}
	}
	if(strlist.empty()&&last!=endword) result=0;
	cout<<result;
	cin.get();
	cin.get();
	return 0;
}
