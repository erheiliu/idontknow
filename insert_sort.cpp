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
	int size=0;
	cin>>size;
	int *a=new int[size];
	srand((unsigned)time(0));
	for(int i=0;i<size;++i){
		a[i]=rand()%10;
	}
	for(int i=0;i<size;++i){
		int key=a[i];
		int k=i;
		while(k-1>=0&&a[k-1]>key){
			a[k]=a[k-1];
			k-=1;
		}
		a[k]=key;
	}
	for(int i=0;i<size;++i){
		cout<<endl;
		cout<<a[i];
	}

	cin.get();
	cin.get();
	delete[] a;
	return 0;
}