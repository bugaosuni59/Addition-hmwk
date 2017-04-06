#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("plantguide.txt","r",stdin);
	freopen("p2.txt","w",stdout);
	string str="https://plants.usda.gov/";
	string str1="https://plants.usda.gov/plantguide/doc/pg_";
	string str2="https://plants.usda.gov/factsheet/doc/fs_";
	string str3=".docx";
	
	while(cin>>str2){
		cout<<str+str2<<endl;
	}
	
	return 0;
}
