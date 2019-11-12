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
//length-of-last-word
int main(){
	string str="world  ";
	int i=str.size()-1;
	int len=0;
	while(i>=0){
		if(str[i]!=' '){
			--i;
			++len;
		}
		else if(len==0&&str[i]==' '){
			--i;
		}
		else if(len!=0&&str[i]==' '){
			break;
		}
	}
	cout<<len;
	cin.get();
	cin.get();
	return 0;
}