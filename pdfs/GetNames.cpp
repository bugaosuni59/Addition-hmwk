#include <bits/stdc++.h>
using namespace std;

int main(){
	ifstream ifs;
	ifstream ifs2;
	string str1="fs_";
	string str2="pg_";
	string str3="cs_";
	string xxx=".pdf";
	string str;
	string file;
	ifs.open("symbol.txt");
//	if(ifs)cout<<"666";
//	else cout<<"0";
	freopen("pdfNames.txt","w",stdout);
	while(ifs>>str){
		// ��дתСд 
		transform(str.begin(), str.end(), str.begin(), ::tolower); 
		file = str1+str+xxx;
		ifs2.open(file.data());
		if(ifs2){
			cout<<file<<endl;
			ifs2.close();
		}
		file = str2+str+xxx;
		ifs2.open(file.data());
		if(ifs2){
			cout<<file<<endl;
			ifs2.close();
		}
		file = str3+str+xxx;
		ifs2.open(file.data());
		if(ifs2){
			cout<<file<<endl;
			ifs2.close();
		}
		
//		cout<<str<<endl;
	}
	
	
	return 0;
}
