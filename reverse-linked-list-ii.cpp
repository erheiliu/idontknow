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

void put(node*& head,int val){
	node* temp=head;
	head=new node();
	head->val=val;
	head->next=temp;
}

int main(){
	node* head=nullptr;
	put(head,5);
	put(head,4);
	put(head,3);
	put(head,2);
	put(head,1);
	int m;
	int n;
	cin>>m;
	cin>>n;
	
	node* dummyhead=new node();
	dummyhead->next=head;
	
	node* p1=dummyhead;
	for(int i=1;i<m;++i){
		p1=p1->next;
	}
	//cout<<p1->val;

	node* move=p1->next;
	node* temp=nullptr;
	node* temp1=nullptr;
	for(int i=0;i<n-m;++i){
		temp=p1->next;
		temp1=move->next->next;
		p1->next=move->next;
		p1->next->next=temp;
		move->next=temp1;
	}

	head=dummyhead->next;
	while(head){
		node*temp=head;
		cout<<head->val;
		head=head->next;
		delete temp;
	}
	cin.get();
	cin.get();
	return 0;
}
