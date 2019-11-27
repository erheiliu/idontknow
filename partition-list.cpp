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

void put(node* &head,int value){
	node* temp=head;
	head=new node();
	head->val=value;
	head->next=temp;
}

int main(){
	node* head=nullptr;


	put(head,1);

	int x=0;
	node* dummyhead=new node();
	dummyhead->next=head;
	node* p1=dummyhead;
	node* p2=nullptr;
	while(p1->next){
		if(p1->next->val>=x) break;
		p1=p1->next;
	}
	if(!p1->next) {
		cout<<"!!!";
		cin.get();
		return 0;
	}
	else p2=p1->next;
	node* temp=nullptr;
	while(p2->next){
		if(p2->next->val<x){
			temp=p1->next;
			p1->next=p2->next;
			p2->next=p2->next->next;
			p1=p1->next;
			p1->next=temp;
		}
		if(p2->next&&p2->next->val>=x)p2=p2->next;
	}

	temp=dummyhead->next;
	while(temp){
		node* temp1=temp;
		cout<<temp->val;
		temp=temp->next;
		delete temp1;
	}

	cin.get();
	cin.get();
	return 0;
}
