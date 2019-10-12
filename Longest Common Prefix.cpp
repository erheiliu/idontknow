#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <unordered_map>
#include "Solution.h"
using std::cin;
using std::cout;
using std::endl;
using std::unordered_map;
using std::string;
using std::vector;

int main(){
	vector<string> bag;
	bag.push_back("flower");
	bag.push_back("floght");
	bag.push_back("flow");
	vector<string>::iterator it;
	char temp;
	int n=0;
	vector<char> result;
	it=bag.begin();
	while((*(it+(n%3)))[n/3]!='\0'){
		if(n%3==0) temp=(*(it+(n%3)))[n/3];
		else if(n%3==1&&temp!=(*(it+(n%3)))[n/3]) break;
		else if(n%3==2&&temp!=(*(it+(n%3)))[n/3]) break;
		else if(n%3==2&&temp==(*(it+(n%3)))[n/3]) result.push_back((*(it+(n%3)))[n/3]);
		n++;
	}
	vector<char>::iterator itt;
	for(itt=result.begin();itt!=result.end();++itt){
		cout<<*(itt);
	}
	cin.get();
	cin.get();
	return 0;
}