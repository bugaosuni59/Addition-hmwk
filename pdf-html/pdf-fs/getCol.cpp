#include <bits/stdc++.h>
using namespace std;
bool isok(char c){
	if(c>='0'&&c<='9')return 1;
	if(c>='a'&&c<='z')return 1;
	if(c>='A'&&c<='Z')return 1;return 0;
}
int main(){
//	freopen("b.txt","r",stdin);
	ifstream ifs("b.txt");
	freopen("col.txt","w",stdout);
	string s="fs_";
	char c[1024];
//	while(cin>>c){
//		if(isok(c)){
//			cout<<c;
//		}
//	}
	int len;
	while(ifs.getline(c,sizeof c)){
		len=strlen(c);
		if(len>1){
			for(int i=0;i<len;i++){
				if(!isok(c[i]))c[i]='_';
			}
			cout<<c<<endl;
		}
	}	
	
	return 0;
}
