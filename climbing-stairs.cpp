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
	int n;
	cin>>n;
	if(n<2) return 1;
	int *sum=new int[n];
	for(int i=n-1;i>=0;--i){
		if(i==n-1) sum[i]=1;
		else if(i==n-2)sum[i]=sum[n-1]+1;
		else sum[i]=sum[i+1]+sum[i+2];
	}
	cout<<sum[0];
	delete[] sum;
	cin.get();
	cin.get();
	return 0;
}