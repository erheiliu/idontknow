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

struct node{
	int val;
	node* next;
};
void put(node* &head,int val){
	node* temp=head;
	head=new node();
	head->val=val;
	head->next=temp;
}
int main(){
	node* head=nullptr;
	put(head,3);
	put(head,3);
	put(head,2);
	put(head,1);
	put(head,1);
	put(head,1);

	node* dummyhead=new node();
	dummyhead->next=head;
	node* temp=nullptr;
	node* del=dummyhead;
	while(del->next){
		if(del->next->next&&del->next->val==del->next->next->val){
			while(del->next->next&&del->next->val==del->next->next->val){
				temp=del->next;
				del->next=del->next->next;
				delete temp;
			}
			temp=del->next;
			del->next=del->next->next;
			delete temp;
		}
		else del=del->next;

	}

	del=dummyhead->next;
	while(del){
		temp=del;
		cout<<del->val;
		del=del->next;
		delete temp;
	}
	
	cin.get();
	cin.get();
	return 0;
}
