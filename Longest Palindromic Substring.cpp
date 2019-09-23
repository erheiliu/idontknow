#include <iostream>
#include<ctime>
#include <vector>
#include <unordered_map>
#include "solution.h"
using std::cin;
using std::cout;
using std::endl;
using std::srand;
using std::rand;
 
void get(char *key,int i,int j,int k,int &lower,int &higher){
	int low=k;
	int high=k;
	while(i+k>=0&&j+k<7){//j+k<char length
			if(*(key+i)==*(key+j)){
				low=i+k;high=j+k;
				--i,++j;
			}else break;
		}
		if((high-low)>(higher-lower)){
			higher=high;
			lower=low;
		}
}
int main(){
	
	//char* ch=new char[20];
	//cin>>ch;
	char* ch="eeqwewq";
	cout<<endl<<ch<<endl;

	int k=0,lower=0,higher=0;

	for(char *p=ch;*p!='\0';++p){
		cout<<k<<endl;
		get(p,-1,1,k,lower,higher);
		get(p,0,1,k,lower,higher);
		k+=1;
	}
	cout<<"hello world";
	cout<<"scope:"<<lower<<" "<<higher;
	//delete[] ch;
	cin.get();
	cin.get();
	return 0;
}
