#include <bits/stdc++.h>
using namespace std;
string base1="UPDATE plants SET ggroup='";
string base2="',family='";
string base3="',duration='";
string base4="',growth_habit='";
string base5="',native_status='";
string base6="' WHERE symbol='";
string base7="';";
string sql;
string s6;
string s1;
string s2;
string s3;
string s4;
string s5;
int main(){
	freopen("a.txt","w",stdout);
	freopen("a2.txt","r",stdin);
	
	for(int i=0;i<330/6;i++){
		cin>>s1>>s2>>s3>>s4>>s5>>s6;
//		sql = base1+base2+base3+base4+base5+base6+base7;
		sql = base1+s2+base2+s3+base3+s4+base4+s5+base5+s6+base6+s1+base7;
		cout<<sql<<endl;
	}
	
	
	return 0;
}



