#include <bits/stdc++.h>
using namespace std;

int main(){
//	freopen("a.txt","r",stdin);
	freopen("b.txt","w",stdout);
	ifstream ifs("a.txt");
	string str;
	char tem[1024];
	while(ifs.getline(tem,sizeof tem)){
		cout<<tem;
	}	
	
	
	return 0;
}
