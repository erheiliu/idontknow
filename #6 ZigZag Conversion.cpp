#include <iostream>
#include <ctime>
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
using std::string;
using std::strlen;

int main(){
	string s="LEETCODEISHIRING";
	//string s="LEETCODEISHIRING";
	int line;
	cin>>line;
	double temp=(double)s.size()/(2*line-2);
	cout<<temp<<endl;
	int row=ceil(temp);
	cout<<"数组数量："<<row<<endl;
	char** p=new char*[row];
	for(int i=0;i<row;++i){
		*(p+i)=new char[2*line-2];
		for(int j=0;j<2*line-2;++j){
			*(*(p+i)+j)=' ';
		}
	}

	for(int i=0;i<s.size();++i){
		int j=i/(2*line-2);
		cout<<j;
		*(*(p+j)+(i%(2*line-2)))=s.at(i);
	}
	cout<<endl;
	for(int i=0;i<row;++i){
		for(int j=0;j<2*line-2;++j){
			cout<<*(*(p+i)+j);
		}
	}
	cout<<endl;

	for(int i=0;i<line;++i){
		for(int j=0;j<row;++j){
			if(*(*(p+j)+i)!=' ') cout<<*(*(p+j)+i);
			if(i<line-1&&i>0&&*(*(p+j)+2*line-2-i)!=' ') cout<<*(*(p+j)+2*line-2-i);
		}
	}

	for(int i=0;i<row;++i){
		delete [] p[i];
	}
	delete[] p;
	cin.get();
	cin.get();
	return 0;
}