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
using std::sort;
using std::lower_bound;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}

bool cmp(int &a,int &b){
	return a<b? true:false;
}

int main(){
	vector<int> nums1;
	vector<int> nums2;
	nums1.push_back(4);
	nums1.push_back(9);
	nums1.push_back(5);

	nums2.push_back(9);
	nums2.push_back(4);
	nums2.push_back(9);
	nums2.push_back(8);
	nums2.push_back(4);

	vector<int> result;
	sort(nums1.begin(),nums1.end(),cmp);
	sort(nums2.begin(),nums2.end(),cmp);
	int size1=nums1.size();
	int size2=nums2.size();
	for(int i=0;i<size2;++i){
		if(i>0&&nums2[i]==nums2[i-1]) continue;
		int lo=0,hi=size1;
		while(lo<hi){
			int mid=lo+(hi-lo)/2;
			if(nums1[mid]<nums2[i]) lo=mid+1;
			else hi=mid;
		}
		if(lo>size1-1||nums1[lo]!=nums2[i]) continue;
		else {
			result.push_back(nums1[lo]);
		}
	}
	for(int i=0;i<result.size();++i){
		cout<<result[i];
	}
	cin.get();
	cin.get();
	return 0;
}
