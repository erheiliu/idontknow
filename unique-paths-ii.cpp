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


int main(){

	vector<vector<int>> obstacleGrid;

	vector<int> temp;
	vector<int> temp2;
	vector<int> temp3;
	temp.push_back(0);
	temp.push_back(1);
	temp.push_back(0);
	//temp2.push_back(0);
	//temp2.push_back(0);
	//temp2.push_back(0);
	//temp3.push_back(1);
	//temp3.push_back(0);
	//temp3.push_back(0);
	obstacleGrid.push_back(temp);
	//obstacleGrid.push_back(temp2);
	//obstacleGrid.push_back(temp3);
	int m;
	int n;
	n=obstacleGrid.size();
	m=obstacleGrid[0].size();
	int* *nums=new int*[n];
	for(int i=0;i<n;++i){
		*(nums+i)=new int[m];
		for(int j=0;j<m;++j){
			*(*(nums+i)+j)=0;
		}
	}
	
	for(int i=n-1;i>=0;--i){
		for(int j=m-1;j>=0;--j){
			if(obstacleGrid[i][j]==1) *(*(nums+i)+j)=0;
			else if(i==n-1&&j==m-1) *(*(nums+i)+j)=1;
			else if(i==n-1)	*(*(nums+i)+j)=*(*(nums+i)+j+1);
			else if(j==m-1)	*(*(nums+i)+j)=*(*(nums+i+1)+j);
			else *(*(nums+i)+j)=*(*(nums+i+1)+j)+*(*(nums+i)+j+1);
		}

	}
	cout<<nums[0][0];
	for(int i=0;i<n;++i){
		delete[] *(nums+i);
	}
	delete[] nums;
	cin.get();
	cin.get();
	return 0;
}