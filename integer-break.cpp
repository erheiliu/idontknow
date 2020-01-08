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
using std::unordered_map;
using std::sort;
using std::unordered_set;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}

int main(){
	int n;
	cin>>n;

	int *temp=new int[n];
	temp[0]=1;
	temp[1]=1;
	for(int i=2;i<=n;++i){
		int j=i-1;
		temp[i-1]=temp[i-2];
		while(j>1){
			temp[i-1]=max(j*temp[i-j-1],temp[i-1]);
			--j;
		}
		if(i<n) temp[i-1]=max(temp[i-1],i);
	}
	cout<<temp[n-1];
	delete[] temp;
	cin.get();
	cin.get();
	return 0;
}
