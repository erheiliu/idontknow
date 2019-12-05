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
inline int& cmp(int &val1,int &val2){
	return val1<val2? val1:val2;
}

int main(){
	vector<vector<int>> result;
	vector<int> temp;
	temp.push_back(2);
	result.push_back(temp);
	temp.clear();
	temp.push_back(3);
	temp.push_back(4);
	result.push_back(temp);
	temp.clear();
	temp.push_back(6);
	temp.push_back(5);
	temp.push_back(7);
	result.push_back(temp);
	temp.clear();
	temp.push_back(4);
	temp.push_back(1);
	temp.push_back(8);
	temp.push_back(3);
	result.push_back(temp);
	temp.clear();
	for(int i=0;i<result.size();++i){
		for(int j=0;j<result[i].size();++j){
			cout<<result[i][j];
		}
		cout<<endl;
	}

	int size=result.size();
	int *route=new int[size];
	for(int i=0;i<size;++i){
		route[i]=result[size-1][i];
	}
	for(int i=size-2;i>=0;--i){
		for(int j=0;j<=i;++j){
			route[j]=result[i][j]+cmp(route[j],route[j+1]);
		}
	}
	cout<<route[0];
	delete[] route;
	cin.get();
	cin.get();
	return 0;
}
