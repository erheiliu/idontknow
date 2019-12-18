#include <iostream>
#include <ctime>
#include <vector>
#include <stack>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
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
using std::set;
using std::queue;
using std::pair;
using std::string;
using std::unordered_map;
using std::sort;
using std::unordered_set;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}

void dfs(vector<vector<char>> &grid,bool* *marked,int i,int j){
	*(*(marked+i)+j)=true;
	if(i>0&&!*(*(marked+i-1)+j)&&grid[i-1][j]=='1') dfs(grid,marked,i-1,j);
	if(i<grid.size()-1&&!*(*(marked+i+1)+j)&&grid[i+1][j]=='1') dfs(grid,marked,i+1,j);
	if(j>0&&!*(*(marked+i)+j-1)&&grid[i][j-1]=='1') dfs(grid,marked,i,j-1);
	if(j<grid[i].size()-1&&!*(*(marked+i)+j+1)&&grid[i][j+1]=='1') dfs(grid,marked,i,j+1);
}

int main(){
	int size=0;
	vector<vector<char>> grid;
	vector<char> temp;
	temp.resize(5);
	grid.resize(4);
	temp[0]='1';
	temp[1]='1';
	temp[2]='0';
	temp[3]='0';
	temp[4]='0';
	grid[0]=temp;
	grid[1]=temp;
	temp[0]='0';
	temp[1]='0';
	temp[2]='1';
	grid[2]=temp;
	temp[2]='0';
	temp[3]='1';
	temp[4]='1';
	grid[3]=temp;
	int result=0;
	bool* *marked=new bool*[grid.size()];
	for(int i=0;i<grid.size();++i){
		*(marked+i)=new bool[grid[i].size()];
		for(int j=0;j<grid[i].size();++j){
			*(*(marked+i)+j)=false;
		}
	}
	for(int i=0;i<grid.size();++i){
		for(int j=0;j<grid[i].size();++j){
			cout<<grid[i][j];

		}
		cout<<endl;
	}

	for(int i=0;i<grid.size();++i){
		for(int j=0;j<grid[i].size();++j){
			if(!*(*(marked+i)+j)&&grid[i][j]=='1') {
				dfs(grid,marked,i,j);
				++result;
			}
		}
	}

	cout<<"result"<<result;
	for(int i=0;i<grid.size();++i){
		delete[] *(marked+i);
	}
	delete[] marked;
	cin.get();
	cin.get();
	return 0;
}
