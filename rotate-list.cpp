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
	int value;
	node* next;
};

node* put(node* head,int value){
	node* temp=head;
	head=new node();
	head->value=value;
	head->next=temp;
	return head;
}

int main(){
	node* head=nullptr;
	node* last=nullptr;
	node* temp=nullptr;
	int k;
	int size=0;
	cin>>k;

	head=put(head,1);

	node* p=head;
	while(p){
		if(p->next==nullptr) last=p;
		p=p->next;
		++size;
	}
	if(size!=0)k=k%size;
	if(size==0||k==0) return 0;
	p=head;
	for(int i=1;i<size-k;++i){
		p=p->next;
	}
	
	temp=head;
	head=p->next;
	p->next=nullptr;
	last->next=temp;

	p=head;
	while(p){
		node* temp=p;
		p=p->next;
		cout<<temp->value<<endl;
		delete temp;
	}
	cin.get();
	cin.get();
	return 0;
}