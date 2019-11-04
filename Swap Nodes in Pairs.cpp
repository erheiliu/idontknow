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

node* push(node* first,int value){
	node* temp=first;
	first=new node;
	first->val=value;
	first->next=temp;
	return first;
}

int main(){
	node* first=nullptr;
	for(int i=0;i<2;++i){
		first=push(first,2-i);
	}
	node* result=first->next;
	first->next=first->next->next;
	result->next=first;

	node* tran=first->next;
	node* pre=first;
	while(tran&&tran->next){
		node* temp=tran->next;
		tran->next=tran->next->next;
		temp->next=tran;
		pre->next=temp;
		pre=tran;
		tran=tran->next;
	}
	while(result){
		cout<<result->val;
		node* temp=result;
		result=result->next;
		delete temp;
	}
	cin.get();
	cin.get();
	return 0;
}