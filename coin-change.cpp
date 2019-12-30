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

inline int min(int val1,int val2){
	return val1<val2?val1:val2;
}

int main(){
	vector<int> coins;
	coins.push_back(186);
	coins.push_back(419);
	coins.push_back(83);
	coins.push_back(408);
	int amount=0;

	int size=coins.size();
	int *dp=new int[amount+1];
	dp[0]=0;
	for(int i=1;i<amount+1;++i){
		dp[i]=-1;
		for(int j=0;j<size;++j){
			if(dp[i]==-1&&i-coins[j]>=0&&dp[i-coins[j]]!=-1) dp[i]=dp[i-coins[j]]+1;
			else if(dp[i]!=-1&&i-coins[j]>=0&&dp[i-coins[j]]!=-1){
				dp[i]=min(dp[i-coins[j]]+1,dp[i]);
			}
		}
	}
	cout<<dp[amount];
	delete[] dp;
	cin.get();
	cin.get();
	return 0;
}
