#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("symbol.txt","r",stdin);
	freopen("a.txt","w",stdout);
	string str0 = "INSERT INTO plants(symbol) VALUES('";
	string str1 ;
	string str2 = "');";
	while(cin>>str1){
		cout<<str0+str1+str2<<endl;
	}
	return 0;
}
