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
inline bool cmp(int val1,int val2){
	return val1<val2?true:false;
}
struct ListNode{
	int val;
	ListNode* next;
};
ListNode* put(ListNode * head,int val){
	ListNode *temp=head;
	head=new ListNode;
	head->val=val;
	head->next=temp;
	return head;
}

int main(){
	ListNode *head=nullptr;
	head=put(head,6);
	head=put(head,5);
	head=put(head,4);
	head=put(head,3);
	head=put(head,6);
	head=put(head,2);
	head=put(head,1);
	const int val=6;

	ListNode* dummyhead=new ListNode;
	dummyhead->next=head;
	ListNode* last=dummyhead;
	while(head){
		if(head->val==val) {
			last->next=head->next;
			delete head;
			head=last->next;
		}
		else{
			last=head;
			head=head->next;
		}
	}
	head=dummyhead->next;
	while(head){
		ListNode *temp=head;
		cout<<head->val<<endl;
		head=head->next;
		delete temp;
	}
	cin.get();
	cin.get();
	return 0;
}
