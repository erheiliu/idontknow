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

inline int min(int val1,int val2){
	return val1<val2?val1:val2;
}

int main(){
	string result;
	int n;
	cin>>n;
	unordered_map<int,char> map;

	for(int i=0;i<26;++i){
		if(i==0) map[i]='Z';
		else map[i]=(i-1)*('B'-'A')+'A';
	}
	while(n>0){
		result=map[n%26]+result;
		if(n%26==0) n-=26;
		n/=26;
	}

	cout<<result;
	cin.get();
	cin.get();
	return 0;
}
