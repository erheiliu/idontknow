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


int main(){
	string s="a";
	string result;
	stack<string> st;
	int size=s.size();
	//if(size<=1) return 0;
	string temp;
	for(int i=0;i<size;++i){
		if(s[i]!=' ')temp+=s[i];
		if(!temp.empty()&&(s[i]==' '||i+1==size)) {
				st.push(temp);
				temp.clear();
		}
	}
	if(st.empty()) return 0;
	while(true){
		result+=st.top();
		st.pop();
		if(!st.empty())result+=' ';
		else break;
	}
	cout<<result;
	cin.get();
	cin.get();
	return 0;
}
