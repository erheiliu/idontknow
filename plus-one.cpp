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
	vector<int> digits;
	digits.push_back(9);
	digits.push_back(9);
	digits.push_back(9);
	digits.back()+1;
	int size=digits.size()-1;
	for(int i=size;i>=0;--i){
		++digits[i];
		if(digits[i]>=10){
			digits[i]=0;
		}
		else break;
	}
	if(digits[0]==0) digits.insert(digits.begin(),1);
	for(int i=0;i<digits.size();++i){
		cout<<digits[i]<<endl;
	}
	cin.get();
	cin.get();
	return 0;
}