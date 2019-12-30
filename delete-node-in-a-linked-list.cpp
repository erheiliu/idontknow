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

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x): val(x),next(nullptr){}
};
ListNode* put(ListNode* node,int val){
	ListNode* temp=node;
	node=new ListNode(val);
	node->next=temp;
	return node;
}
int main(){
	int n;
	cin>>n;
	ListNode *node=new ListNode(9);
	node=put(node,1);
	node=put(node,5);
	node=put(node,4);
	node->val=node->next->val;
    ListNode *temp=node->next;
    node->next=node->next->next;
    delete temp;

	cin.get();
	cin.get();
	return 0;
}
