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
	string haystack="";
	string heedle="el";
	int result=-1;
	if(heedle=="") return 0;

	for(int i=0;i<(int)haystack.size()-(int)heedle.size()+1;++i){
		int k=0;
		while(k<heedle.size()&&haystack[i+k]==heedle[k]) k++;
		if(k==heedle.size()){
			result=i;
			break;
		}
	}
	cout<<"result:"<<result;
	cin.get();
	cin.get();
	return 0;
}