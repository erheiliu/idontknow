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

int main(){
	vector<char> s;
	s.push_back('h');
	s.push_back('e');
	s.push_back('l');
	s.push_back('l');
	s.push_back('o');
	int i=0;
	int j=s.size()-1;
	while(i<j){
		char temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		++i;--j;
	}
	for(int i=0;i<s.size();++i){
		cout<<s[i];
	}
	cin.get();
	cin.get();
	return 0;
}
