#include <bits/stdc++.h>
using namespace std;

int main(){
	int cnt=1;
	char num[10];
//	freopen("scientific_name.txt","r",stdin);
//	freopen("common_name.txt","r",stdin);
//	ifstream fin("scientific_name.txt", std::ios::in);
	ifstream fin("common_name.txt", std::ios::in);
	freopen("a.txt","w",stdout);
	char line[1024]={0};
//	string str0 = "UPDATE plants SET scientific_name='";
	string str0 = "UPDATE plants SET common_name='";
	string str1 ;
	string str2 = "' WHERE id=";
//	string str3;
	string str4=";";
	while(fin.getline(line,sizeof(line))){
		sprintf(num,"%d",cnt);
		str1="";
		str1+=line;
		cout<<str0+str1+str2+num+str4<<endl;
		cnt++;
	}
	return 0;
}

