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

inline bool cmp(int val1,int val2)	{
	return val1>val2 ? true:false;
}
struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode():val(),left(),right(){};
	TreeNode(int x): val(x),left(nullptr),right(nullptr){};
};

TreeNode* put(TreeNode *head,int val){
	if(head==nullptr) {
		head=new TreeNode(val);
		return head;
	}
	if(cmp(head->val,val)) head->left=put(head->left,val);
	else if(!cmp(head->val,val)) head->right=put(head->right,val);
	else head->val=val;
}

void dfs(TreeNode *root,vector<int> &result){
	if(root->left) dfs(root->left,result);
	result.push_back(root->val);
	if(root->right) dfs(root->right,result);
}

int main(){
	TreeNode *root=new TreeNode(1);
	root->right=new TreeNode(2);
	root->right->left=new TreeNode(3);
	vector<int> result;
	dfs(root,result);
	for(int i=0;i<result.size();++i){
		cout<<result[i];
	}
	delete root->right->left;
	delete root->right;
	delete root;
	cin.get();
	cin.get();
	return 0;
}
