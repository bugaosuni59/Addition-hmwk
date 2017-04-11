#include <bits/stdc++.h>
using namespace std;
//"font-family: TimesNewRomanPS-BoldMT; font-size:13px"
// TimesNewRomanPS-BoldMT; font-size:13px">
//string s="TimesNewRomanPS-BoldMT; font-size:13px\">";
string s="TimesNewRomanPS-BoldMT;font-size:13px\">";
// 从s读到"<"把这之间的东西搞出来一个一行 
int main(){
	freopen("a.txt","r",stdin);
	freopen("b.txt","w",stdout);
	string str;
	string fname;
	ifstream ifs;
	char c;
	bool flag;
	int i;
	int l;
	int len=s.length();
	int ma=0;
	while(cin>>str){
		fname="";
		l=str.length();
		for(int j=0;j<l-4;j++){
			fname+=str[j];
		}fname+=".html";
		ifs.open(fname.data());
		i=0;
		flag=0;
		while(ifs>>c){
			ma=max(i,ma);
			if(c==s[i]){
				i++;
				if(i==len){
					flag=1;
				}
			}else i=0;
			if(flag){
				if(c=='<'){
					cout<<endl;
					flag=0;
					i=0;
				}
				else{
					if(c!='>'&&c!=' '&&c!='\n')
					cout<<c;
				}
			}
		}
		
		ifs.close();
	}
	cout<<ma<<endl<<len;
	
	return 0;
}

