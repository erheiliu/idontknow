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
void put(node* &first,int value){
	node* temp=first;
	first=new node();
	first->value=value;
	first->next=temp;
}

int main(){
	node* first=nullptr;
	

	node* del=first;
	node* temp=nullptr;
	while(del){
		while(del->next&&del->value==del->next->value){
			temp=del->next;
			del->next=del->next->next;
			delete temp;
		}
		del=del->next;
	}
	
	temp=first;
	while(temp){
		cout<<temp->value;
		node* temp1=temp;
		temp=temp->next;
		delete temp1;
	}
	cin.get();
	cin.get();
	return 0;
}
