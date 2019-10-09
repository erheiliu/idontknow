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

int main(){
	int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	string b[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	string s;
	cout<<"insert transfer char:";
	cin>>s;
	cout<<s<<endl;
	unordered_map<string,int> map;
	for(int i=0;i<sizeof(a)/sizeof(int);++i){
		map[*(b+i)]=*(a+i);
	}
	int i=0;
	string x;
	int count=0;
	cout<<s.size()<<endl;
	while(i<s.size()){
		if(i+1<s.size()) {
			x=s.substr(i,i+2);
			if(map.find(x)!=map.end()){
				cout<<x<<"is"<<map[x]<<endl;
				count+=map[x];
				i+=2;
				continue;
			}
		}
		x=s.substr(i,i+1);
		cout<<x<<map[x]<<endl;
		count+=map[x];
		i++;	
	}
	cout<<"result:"<<count;
	cin.get();
	cin.get();
	return 0;
}