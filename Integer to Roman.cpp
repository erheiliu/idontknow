#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <unordered_map>
#include "Solution.h"
using std::cin;
using std::cout;
using std::endl;
using std::unordered_map;
using std::string;

int main(){
	int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	string b[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int num;
	cout<<"insert transfer number:";
	cin>>num;
	for(int i=0;i<sizeof(a)/sizeof(int);++i){
		while(num/a[i]>0){
			cout<<b[i];
			num-=a[i];
		}
	}
	cin.get();
	cin.get();
	return 0;
}