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

node* insert(node* first,int val){
	node* temp=first;
	first=new node;
	first->value=val;
	first->next=temp;
	return first;
}

int main(){
	node* stack1=nullptr;
	node* stack2=nullptr;
	stack1=insert(stack1,5);
	stack1=insert(stack1,3);
	stack1=insert(stack1,2);
	stack1=insert(stack1,1);
	stack2=insert(stack2,4);
	stack2=insert(stack2,3);
	stack2=insert(stack2,1);

	node* p1=stack1;
	node* p2=stack2;
	node* temp=nullptr;
	node* result=nullptr;
	while(p1&&p2){
		if(p1->value<p2->value){
			while(p1->next&&p1->next->value<=p2->value) p1=p1->next;
			if(temp==nullptr) result=stack1;
			temp=p1;
			p1=p1->next;
			temp->next=p2;
		}
		else if(p1->value>=p2->value){
			while(p2->next&&p2->next->value<=p1->value) p2=p2->next;
			if(temp==nullptr) result=stack2;
			temp=p2;
			p2=p2->next;
			temp->next=p1;
		}
	}
	
	while(result){
		node* temp=result;
		result=result->next;
		cout<<temp->value<<endl;
		delete temp;

	}
	cin.get();
	cin.get();
	return 0;
}