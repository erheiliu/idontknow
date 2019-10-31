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
node* put(node *first,int val){
	node *temp=first;
	first=new node;
	first->value=val;
	first->next=temp;
	return first;
}
int main(){
	map<int,node*> key;
	int n;
	cin>>n;
	node* stack=nullptr;
	for(int i=0;i<5;++i){
		stack=put(stack,5-i);
	}
	node* p=stack;
	int i=0;
	while(p){
		cout<<p->value<<endl;
		key[i]=p;
		node*temp=p;
		p=p->next;
		i+=1;
	}
	cout<<"delete last"<<n<<"value£º"<<key[key.size()-n]->value<<endl;
	node* tempdele=key[key.size()-n];
	if(key.size()-n==0) stack=stack->next;
	else key[key.size()-n-1]->next=key[key.size()-n]->next;

	delete tempdele;
	cout<<"remain value£º"<<endl;
	p=stack;
	while(p){
		cout<<p->value<<endl;
		node*temp=p;
		p=p->next;
		delete temp;
	}
	cin.get();
	cin.get();
	return 0;
}