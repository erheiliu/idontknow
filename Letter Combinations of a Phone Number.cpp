#include <iostream>
#include <ctime>
#include <vector>
#include <stack>
#include <cmath>
#include <map>
#include <unordered_map>
#include <string>
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
using std::pair;
using std::string;
using std::unordered_map;
using std::sort;

void combine(const string s,int it,vector<string> &vec){
	char ch=s[it];
	char* p=nullptr;
	switch(ch){
	case'2':
		p="abc";
		break;
	case'3':
		p="def";
		break;
	case'4':
		p="ghi";
		break;
	case'5':
		p="jkl";
		break;
	case'6':
		p="mno";
		break;
	case'7':
		p="pqrs";
		break;
	case'8':
		p="tuv";
		break;
	case'9':
		p="wxyz";
		break;
	}
	if(p!=nullptr){
		vector<string> temp;
		vector<string>::iterator itor;
		for(int i=0;*(p+i)!='\0';++i){
			for(itor=vec.begin();itor!=vec.end();++itor){
				temp.push_back((*itor));
				(*(temp.end()-1)).append(1,*(p+i));
			}
		}
		vec.clear();
		vec.swap(temp);
		if(it+1<s.size()) combine(s,it+1,vec);
	}
	}
int main(){
	vector<string> vect;
	string s;
	cin>>s;
	vect.push_back("");
	combine(s,0,vect);
	vector<string>::iterator it;
	for(it=vect.begin();it!=vect.end();++it){
		cout<<*it<<endl;

	}
	cin.get();
	cin.get();
	return 0;
}