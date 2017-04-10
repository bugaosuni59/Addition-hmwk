//py -2 pd2.py -o output.html fs_abba.pdf
#include <bits/stdc++.h>
using namespace std;

string s1="py -2 pd2.py -o ";
string s2;
string s3=".html ";
string s4;
//string s;

int main(){
	freopen("a.txt","r",stdin);
	freopen("change.bat","w",stdout);
	int len;
	while(cin>>s4){
		len=s4.length();
		s2="";
		for(int i=0;i<len-4;i++)s2+=s4[i];
		cout<<s1+s2+s3+s4<<endl;
	}
	
	return 0;	
}

