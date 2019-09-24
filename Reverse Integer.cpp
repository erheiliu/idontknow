#include <iostream>
#include<ctime>
#include <vector>
#include <stack>
#include <cmath>
#include <unordered_map>
#include "solution.h"
using std::cin;
using std::cout;
using std::endl;
using std::srand;
using std::rand;
using std::stack;
using std::vector;
using std::pow;

int main(){
	int num;
	cout<<"input number:";
	cin>>num;
	int result=0;
	while(abs(num)>0){
		result=result*10+num%10;
		num/=10;
	}
	if(result>pow(2.0,31)-1||result<pow(-2.0,31)) result=0;
	cout<<"result:"<<result;
	cin.get();
	cin.get();
	return 0;
}