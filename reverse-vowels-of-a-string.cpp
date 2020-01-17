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
using std::sort;
using std::lower_bound;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}

int main(){
	string s="leetcode";
	int size=s.size();
	int i=0,j=size-1;
	set<char> sc;
	sc.insert('a');
	sc.insert('e');
	sc.insert('i');
	sc.insert('o');
	sc.insert('u');
	sc.insert('A');
	sc.insert('E');
	sc.insert('I');
	sc.insert('O');
	sc.insert('U');
	while(i<j){
		while(sc.find(s[i])==sc.end()&&i<j) ++i;
		while(sc.find(s[j])==sc.end()&&j>i) --j;
		char temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		++i;--j;
	}
	cout<<s;
	cin.get();
	cin.get();
	return 0;
}
