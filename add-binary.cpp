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

inline int max(int a,int b){
	return a>b?a:b;
}

int main(){
	string a="11";
	string b="1";
	int size=max(a.size(),b.size());
	while(a.size()<size) a='0'+a;
	while(b.size()<size) b='0'+b;
	for(int i=size-1;i>0;--i){
		a[i]=a[i]-'0'+b[i];
		if(a[i]>='2'){
			a[i-1]=a[i-1]+1;
		}
		a[i]=(a[i]-'0')%2+'0';
	}
	a[0]=a[0]-'0'+b[0];
	if(a[0]>='2') {
		a[0]=(a[0]-'0')%2+'0';
		a='1'+a;
	}
	cout<<a;
	cin.get();
	cin.get();
	return 0;
}