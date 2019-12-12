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
inline bool cmp(int val1,int val2){
	return val1<val2?true:false;
}

int main(){
	string s = "0P";
	//string s="race a car";
	bool result=true;
	int size=s.size();
	int i=0;
	int j=size-1;
	while(i<=j){
		while(i+1<size&&!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')))
			++i;
		while(j-1>=0&&!((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')))
			--j;
		if(i<=j&&(s[i]>='a'&&s[i]<='z')&&!(s[i]-32==s[j]||s[i]==s[j])) result=false;
		else if(i<=j&&(s[i]>='A'&&s[i]<='Z')&&!(s[i]+32==s[j]||s[i]==s[j])) result=false;
		else if(i<=j&&(s[i]>='0'&&s[i]<='9')&&s[i]!=s[j]) result=false;
		++i;
		--j;
	}
	cout<<result;
	cin.get();
	cin.get();
	return 0;
}
