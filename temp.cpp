#include <iostream>
#include<ctime>
#include <vector>
#include "solution.h"
using std::cin;
using std::cout;
using std::endl;
using std::srand;
using std::rand;

typedef struct Node{
	int val;
	Node* next;
} Node;

Node* insert(Node* head,int num){
	Node* temp=head;
	head=new Node;
	head->val=num;
	head->next=temp;
	cout<<"insert num:"<<head->val<<endl;
	return head;
}

void print_node(Node *node){
	for(Node *temp=node;temp!=NULL;temp=temp->next){
		cout<<temp->val<<endl;
	}
}

void free(Node* node){
	while(node){
		Node* temp=node->next;
		cout<<"Delete node:"<<node->val<<endl;
		delete node;
		node=temp;
	}
}

int* add(Node *a,Node *b){
	int count=1;
	int *total=new int;
	*total=0;
	for(Node *temp=a;temp!=NULL;temp=temp->next){
		*total+=temp->val*count;
		count*=10;
	}
	count=1;
	for(Node *temp=b;temp!=NULL;temp=temp->next){
		*total+=temp->val*count;
		count*=10;
	}
	return total;
}

int main(){
	Node *a=NULL;
	Node *b=NULL;
	srand((unsigned) time(0));
	for(int i=0;i<6;++i){
		a=insert(a,rand()%9);
	}
	for(int i=0;i<6;++i){
		b=insert(b,rand()%9);
	}
	print_node(a);
	cout<<"**********************"<<endl;
	print_node(b);
	int *x=add(a,b);
	cout<<"result:"<<*x<<endl;
	delete x;
	free(a);
	free(b);
	cin.get();
	return 0;
}