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
using std::string;
using std::unordered_map;
using std::sort;
using std::unordered_set;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}

int main(){
	string s="egb";
	string t="ada";
	bool result=true;
	unordered_map<char,char> heap;
	set<char> exist;
	int size=s.size();
	for(int i=0;i<size;++i){
		if(heap.find(s[i])==heap.end()&&exist.find(t[i])==exist.end()){
			heap[s[i]]=t[i];
			exist.insert(t[i]);
		}else if(heap[s[i]]==t[i]) continue;
		else {
			result=false;
			break;
		}
	}
	cout<<result;
	cin.get();
	cin.get();
	return 0;
}
