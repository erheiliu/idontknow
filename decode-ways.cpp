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
	string s="226";
	int size=s.size();
	int delta=('1'-'0');
	if(size==0) return size;
	else if(size==1&&s[0]!='0') return size;
	else if(s[0]=='0') return 0;

	int *count=new int[size];
	count[0]=1;
	if(s[1]!='0'&&(s[0]-'0')/delta*10+(s[1]-'0')/delta<=26) count[1]=count[0]+1;
	else if(s[1]=='0'&&(s[0]-'0')/delta*10+(s[1]-'0')/delta>26) return 0;
	else count[1]=count[0];
	for(int i=2;i<size;++i){
		if(s[i]=='0') {
			if(s[i-1]=='0'||(s[i-1]-'0')/delta*10+(s[i]-'0')/delta>26) return 0;
			count[i]=count[i-2];
			count[i-1]=count[i-2];
		}
		else if(s[i-1]=='0') count[i]=count[i-1];
		else if((s[i-1]-'0')/delta*10+(s[i]-'0')/delta<=26){
			count[i]=count[i-1]+count[i-2];
		}
		else  count[i]=count[i-1];
	}
	cout<<count[size-1];
	delete[] count;
	cin.get();
	cin.get();
	return 0;
}
