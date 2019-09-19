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

Node* insert(Node* head,Node **last,int num){
	Node* temp=*last;
	*last=new Node;
	(*last)->val=num;
	(*last)->next=NULL;
	if(head==NULL) head=*last;
	else temp->next=(*last);
	cout<<"insert num:"<<(*last)->val<<endl;
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

Node* add(Node *a,Node *b){
	Node* final=NULL;
	Node* last=NULL;
	while(a!=NULL&b!=NULL){
		final=insert(final,&last,a->val+b->val);
		a=a->next;
		b=b->next;
	}

	for(Node *node=final;node!=NULL;node=node->next){
		if(node->val>=10){
			node->val=node->val%10;
			if(node->next!=NULL) node->next->val+=1;
			else{
				node->next=new Node;
				node->next->val=1;
				node->next->next=NULL;
			}
		}
	}
	cout<<final;
	return final;
}

int main(){
	Node *a=NULL;
	Node *last1=NULL;
	Node *last2=NULL;
	Node *b=NULL;

	Node *result=NULL;
	Node *last3=NULL;

	srand((unsigned) time(0));
	for(int i=0;i<6;++i){
		a=insert(a,&last1,rand()%9);
	}
	for(int i=0;i<6;++i){
		b=insert(b,&last2,rand()%9);
	}
	print_node(a);
	cout<<"**********************"<<endl;
	print_node(b);
	Node *x=add(a,b);
	cout<<"result is:"<<endl;
	print_node(x);
	free(x);
	free(a);
	free(b);
	cin.get();
	return 0;
}