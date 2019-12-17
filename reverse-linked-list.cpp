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
using std::string;
using std::unordered_map;
using std::sort;
using std::unordered_set;

inline int max(int val1,int val2){
	return val1>val2?val1:val2;
}
struct ListNode{
	int val;
	ListNode* next;
};
ListNode* put(ListNode* head,int val){
	ListNode* temp=head;
	head=new ListNode();
	head->val=val;
	head->next=temp;
	return head;
}
int main(){
	ListNode *head=nullptr;
	for(int i=5;i>0;--i) head=put(head,i);
	if(head==nullptr) return 0;
	ListNode* pre=nullptr;
	ListNode* cur=head;
	while(cur!=nullptr){
		ListNode* temp=cur->next;
		cur->next=pre;
		pre=cur;
		cur=temp;
	}
	while(pre){
		ListNode* temp=pre;
		pre=pre->next;
		cout<<temp->val;
		delete temp;
	}
	cin.get();
	cin.get();
	return 0;
}
