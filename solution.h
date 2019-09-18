//#include <iostream>
#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;
class Solution{
public:
	static vector<int> grab(int a[],int target){
		int n=sizeof(a)/sizeof(a[0]);
		vector<int> temp,result;
		//bool flag=true;
		for(int i=0;i<9;++i){
			//std::cout<<a[i]<<"\n";
			for(int j=0;j<temp.size();++j){
				//std::cout<<temp[j]<<"\n";
				if((temp[j]+a[i])==target){
					result.push_back(i);
					result.push_back(j);
					//flag=false;
					//break;
					return result;
				} 
			}
			//if(flag=false) break;
			temp.push_back(a[i]);
		}
		return result;
	}
};