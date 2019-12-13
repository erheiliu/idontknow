#include <iostream>
#include <ctime>
#include <vector>
#include <stack>
#include <cmath>
#include <map>
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
using std::queue;
using std::pair;
using std::string;
using std::unordered_map;
using std::sort;
using std::unordered_set;


int main(){
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	int size=nums.size();
	int *temp=new int[size];
	for(int i=size-2;i>=0;--i){
		if(i==size-2){
			temp[i]=nums[size-1];
		}
		else temp[i]=temp[i+1]*nums[i+1];
	}
	int num=1;
	temp[size-1]=1;
	for(int i=0;i<size;++i){
		int tempNum=nums[i];
		nums[i]=num*temp[i];
		num*=tempNum;
	}
	for(int i=0;i<size;++i){
		cout<<nums[i]<<endl;
	}
	delete[] temp;
	cin.get();
	cin.get();
	return 0;
}
