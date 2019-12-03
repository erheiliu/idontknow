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

void dfs(vector<string> &result,string &str,string temp,int start,int n,int &size){
	string shortstr;
	int num=0;
	if(n==4){
		for(int i=start;i<size;++i) {
			shortstr+=str[i];
			num=num*10+((str[i]-'0')/('1'-'0'));
		}
		if(shortstr.size()>1&&shortstr[0]=='0') return;
		if(num<=255){
			temp+=shortstr;
			result.push_back(temp);
		}
		else return;
	}
	else{
		for(int i=start;i<size-(4-n);++i){
			shortstr+=str[i];
			num=num*10+((str[i]-'0')/('1'-'0'));
			if(num<=255){
				dfs(result,str,temp+shortstr+'.',i+1,n+1,size);
			}
			else break;

		}
	}

}
int main(){
	string str="010010";
	vector<string> result;
	string temp;
	int size=str.size();
	if(size>12) return 0;
	dfs(result,str,temp,0,1,size);
	for(int i=0;i<result.size();++i){
		cout<<result[i]<<endl;
	}
	cin.get();
	cin.get();
	return 0;
}
