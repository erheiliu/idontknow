#include <iostream>
#include <ctime>
#include <cstring>
#include <vector>
#include <stack>
#include <cmath>
#include <array>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <queue>
#include <algorithm>
#include <fstream>
#include <iostream>
#include "solution.h"
#include "cstdio"
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
using std::unordered_map;
using std::sort;
using std::unordered_set;
using std::lower_bound;
using std::ifstream;
using std::ofstream;
using std::ios;
using std::ios_base;

string dfs(const string& A,const string& B,const string& C){
	string result="";
	int i=0;
	int sizeA=A.size();
	int sizeB=B.size();
	while(i<sizeA-sizeB+1){
		int j=i;
		while(j<i+sizeB){
			if(B[j-i]!=A[j]) break;
			j++;
		}
		if(j==i+sizeB) {
			result+=C;
			int k=i+sizeB;
			while(k<sizeA) {result+=A[k];k++;}
			return dfs(result,B,C);
		}
		result+=A[i];
		i++;
		
	}
	return A;
}


int main(){
	string A="abaababaab";
	string B="ab";
	string C="b";
	string result=dfs(A,B,C);
	cout<<result;

	cin.get();
	cin.get();
	return 0;
}
