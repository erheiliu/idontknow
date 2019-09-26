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
	int total=0;
	const int size=sizeof(a)/sizeof(int);
	for(int i=0;i<size;++i){
		for(int j=i+1;j<size;++j){
			int temp=(j-i)*less(a[i],a[j]);
			total=biger(temp,total);
		}
	}
	cout<<total;
	cin.get();
	cin.get();
	return 0;
}