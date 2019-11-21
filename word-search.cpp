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
void dfs(vector<vector<char>> &board,bool* *marked,int i,int j,const string &word,int k,bool &result){
	if(result) return;
	if(board[i][j]==word[k]){
		*(*(marked+i)+j)=true;
		if(k==word.size()-1) result=true;
		if(i-1>=0&&!*(*(marked+i-1)+j)) dfs(board,marked,i-1,j,word,k+1,result);
		if(j-1>=0&&!*(*(marked+i)+j-1)) dfs(board,marked,i,j-1,word,k+1,result);
		if(i+1<board.size()&&!*(*(marked+i+1)+j)) dfs(board,marked,i+1,j,word,k+1,result);
		if(j+1<board[0].size()&&!*(*(marked+i)+j+1)) dfs(board,marked,i,j+1,word,k+1,result);
		*(*(marked+i)+j)=false;
	}
}
int main(){
	vector<vector<char>> board;
	vector<char> temp1;
	vector<char> temp2;
	vector<char> temp3;

	string word="";
	bool result=false;
	temp1.push_back('A');
	temp1.push_back('B');
	temp1.push_back('C');
	temp1.push_back('E');
	temp2.push_back('S');
	temp2.push_back('F');
	temp2.push_back('C');
	temp2.push_back('S');
	temp3.push_back('A');
	temp3.push_back('D');
	temp3.push_back('E');
	temp3.push_back('E');
	board.push_back(temp1);
	board.push_back(temp2);
	board.push_back(temp3);
	int size1=board.size();
	int size2=board[0].size();
	bool **marked=new bool*[size1];
	for(int i=0;i<size1;++i){
		*(marked+i)=new bool[size2];
		for(int j=0;j<size2;++j){
			*(*(marked+i)+j)=false;
		}
	}
	for(int i=0;i<size1;++i){
		for(int j=0;j<size2;++j){
			dfs(board,marked,i,j,word,0,result);
			if(result) break;
		}
		if(result) break;
	}
	//dfs(board,marked,0,0,word,0,result);
	cout<<result;
	for(int i=0;i<size1;++i){
		delete[] *(marked+i);
	}
	delete[] marked;
	cin.get();
	cin.get();
	return 0;
}
