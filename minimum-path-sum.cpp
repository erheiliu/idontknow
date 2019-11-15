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

inline int min(int &a,int &b){
	return a<b?a:b;
}
int main(){
	vector<vector<int>> grid;
	vector<int> temp1;
	vector<int> temp2;
	vector<int> temp3;
	temp1.push_back(1);
	temp1.push_back(3);
	temp1.push_back(1);
	temp2.push_back(1);
	temp2.push_back(5);
	temp2.push_back(1);
	temp3.push_back(4);
	temp3.push_back(2);
	temp3.push_back(1);
	grid.push_back(temp1);
	grid.push_back(temp2);
	grid.push_back(temp3);
	
	int n=grid.size();
	if(n==0) return 0;
	int m=grid[0].size();
	
	for(int i=n-1;i>=0;--i){
		for(int j=m-1;j>=0;--j){
			if(i==n-1&&j==m-1) continue;
			else if(i==n-1) grid[i][j]+=grid[i][j+1];
			else if(j==m-1) grid[i][j]+=grid[i+1][j];
			else grid[i][j]+=min(grid[i+1][j],grid[i][j+1]);
		}
	}
	cout<<grid[0][0];
	cin.get();
	cin.get();
	return 0;
}