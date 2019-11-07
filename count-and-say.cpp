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

void getstr(string &result,map<int,char> map,int n){
	if(n<=0) return;
	if(result=="") {
		result+='1';
		getstr(result,map,n-1);
	}
	else {
		int count=0;
		string str="";
		for(int i=0;i<result.size();++i){
			if(count==0) count+=1;
			else if(result[i]==result[i-1]) count+=1;
			else if(result[i]!=result[i-1]){
				str+=map[count];
				str+=result[i-1];
				count=1;
			}
		}
		str+=map[count];
		str+=result.back();
		result=str;
		str.clear();
		getstr(result,map,n-1);
	}
}


int main(){
	map<int,char> map;
	map[1]='1';
	map[2]='2';
	map[3]='3';
	map[4]='4';
	map[5]='5';
	map[6]='6';
	map[7]='7';
	map[8]='8';
	map[9]='9';
	string result="";
	int n;
	cin>>n;
	getstr(result,map,n);
	cout<<result;
	cin.get();
	cin.get();
	return 0;
}