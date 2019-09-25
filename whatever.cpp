#include <iostream>
#include<ctime>
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


int main(){
	string s="LEETCODEISHIRING";
	int line;
	cin>>line;
	char** p=new char*[line];
	double temp=s.size()/line;
	int row=ceil(temp);
	for(int i=0;i<line;++i){
		*(p+i)=new char[row];
		for(int j=0;j<row;++j){
			*(*(p+i)+j)='b';
		}
	}
	for(int i=0;i<line;++i){
		for(int j=0;j<row;++j){
			cout<<*(*(p+i)+j);
		}
		cout<<endl;
	}
	for(int i=0;i<line;++i){
		delete [] p[i];
	}
	delete[] p;
	cin.get();
	cin.get();
	return 0;
}