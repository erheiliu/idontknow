#include <iostream>
#include <ctime>
#include <vector>
#include <stack>
#include <cmath>
#include <unordered_map>
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

inline int less(int a,int b) {return (a>=b)? b:a;}
inline int biger(int a,int b) {return (a<b)? b:a;}

int main(){
	int a[9]={1,8,6,2,5,4,8,3,7};
	int i=0;
	int j=(sizeof(a)/sizeof(int)-1);
	int result=(j-i)*less(a[i],a[j]);
	while(i<j){
		if(less(a[i],a[j])==a[i]) ++i;
		else if(less(a[i],a[j])==a[j]) --j;
		if(i==j) break;
		int temp=(j-i)*less(a[i],a[j]);
		if(temp>result){
			result=temp;
		}
		else{
			break;
		}
	}
	cout<<result;
	cin.get();
	cin.get();
	return 0;
}