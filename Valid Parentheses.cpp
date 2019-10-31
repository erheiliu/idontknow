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


int main(){
	map<char,char> asset;
	asset['(']=')';
	asset['{']='}';
	asset['[']=']';
	string str="([])[]{}[]{]";
	stack<char> temp;
	bool flag=true;
	for(int i=0;i<str.size();++i){
		if(asset.find(str[i])!=asset.end()) temp.push(asset[str[i]]);
		else if(!temp.empty()&&str[i]==temp.top()) temp.pop();
		else {
			flag=false;
			break;
		}
	}
	cout<<flag;
	cin.get();
	cin.get();
	return 0;
}