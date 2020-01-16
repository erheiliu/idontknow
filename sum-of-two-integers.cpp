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

	int a=1;
	int b=-2;
	int c=a&b;
	int result=a^b;
	while(c){
		c=(unsigned)c<<1;
		int temp=result;
		result=result^c;
		c=temp&c;
	}
	cout<<result;

	cin.get();
	cin.get();
	return 0;
}
