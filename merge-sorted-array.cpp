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
inline void swap(vector<int> &nums1,vector<int> &nums2,int i,int j){
	int temp=nums1[i];
	nums1[i]=nums2[j];
	nums2[j]=temp;
}

int main(){
	vector<int> nums1;
	vector<int> nums2;
	nums1.push_back(4);
	nums1.push_back(5);
	nums1.push_back(6);
	nums1.push_back(0);
	nums1.push_back(0);
	nums1.push_back(0);
	nums2.push_back(1);
	nums2.push_back(2);
	nums2.push_back(3);
	//nums1.push_back(3);
	//nums1.push_back(3);
	//nums1.push_back(3);
	//nums1.push_back(3);
	//nums1.push_back(4);

	int m=nums1.size();
	int n=nums2.size();

	int i=0;
	int j=0;
	while(i<m){
		if(i>m-n-1) nums1[i++]=nums2[j++];
		else if(nums1[i]>nums2[j]) {
			swap(nums1,nums2,i++,j);
			sort(nums2.begin(),nums2.end());
		}
		else ++i;
	}	
	for(int i=0;i<m;++i){
		cout<<nums1[i];
	}
	
	cin.get();
	cin.get();
	return 0;
}
