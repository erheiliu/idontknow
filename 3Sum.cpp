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

int main(){
	vector<int> num;
	int a[]={-1,0,1,2,-1,-4,-1,1};
	for(int i=0;i<sizeof(a)/sizeof(int);++i){
		num.push_back(a[i]);
	}
	sort(num.begin(),num.end());
	vector<int>::iterator it;
	for(it=num.begin();it!=num.end();++it){
		cout<<*it<<endl;
	}
	vector<int*> result;
	for(it=num.begin();(it+2)!=num.end();++it){
		if(it>num.begin()&&*it==*(it-1)) continue;
		vector<int>::iterator i=it+1;
		vector<int>::iterator j=num.end()-1;
		while(i<j){
			if(*it+*i+*j>0) j-=1;
			else if(*it+*i+*j<0) i+=1;
			else if(*it+*i+*j==0){
				int* temp=new int[3];
				temp[0]=*it;
				temp[1]=*i;
				temp[2]=*j;
				result.push_back(temp);
				i+=1;
				while(i<j&&*i==*(i-1)) i+=1;
			}
		}
	}
	vector<int*>::iterator ii;
	for(ii=result.begin();ii!=result.end();++ii){
		for(int i=0;i<3;++i){
			cout<<*(*ii+i);
		}
		delete[] *ii;
	}

	cin.get();
	cin.get();
	return 0;
}