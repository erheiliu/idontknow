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
struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

void dfs(TreeNode *p,TreeNode *q,bool &result){
	if(!result) return;
	if(p==nullptr&&q==nullptr) return;
	else if(p&&q){
		if(p->val==q->val) {
			dfs(p->left,q->left,result);
			dfs(p->right,q->right,result);
		}else	result=false;
	}else result=false;
}

void delNode(TreeNode *p){
	if(p->left) delNode(p->left);
	cout<<p->val;
	if(p->right) delNode(p->right);
	delete p;
}
int main(){
	TreeNode *p=new TreeNode(1);
	p->left=new TreeNode(2);
	p->right=new TreeNode(4);
	TreeNode *q=new TreeNode(1);
	q->left=new TreeNode(2);
	q->right=new TreeNode(3);


	bool result=true;
	dfs(p,q,result);

	cout<<result<<endl;
	delNode(p);
	delNode(q);
	cin.get();
	cin.get();
	return 0;
}
