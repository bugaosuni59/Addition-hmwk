#include <bits/stdc++.h>
using namespace std;
/*
读取策略：
必然从"Symbol:" 开始，"Group："前结束 
 "Group:"下一字段前结束 
 "Family:"下一字段前结束
 "Duration:"下一字段前结束
 "Growth" "Habit:"先拼接辆字符，下一字段前结束
 
 Native Status:必然规律：1个字符串，1个字符
 当连续读取两个 第二个不是单个字符时停止 
 
*/
int main(){
//	freopen("a.txt","r",stdin);
//	freopen("profile.txt","r",stdin);
	freopen("b.txt","a",stdout);
	string str;
	ifstream ifs;
	string s1="profile (";
//	string s2;//数字 
	char s2[10];// 数字 
	string s3=").txt";
	int flag=0;
	for(int i=1;i<=54;i++){
		flag=0;
		sprintf(s2,"%d",i);
		str=s1+s2+s3;
		ifs.open(str.data());
		while(ifs>>str){
			//cout<<str<<endl;
			if(str.compare("Symbol:")==0)
				flag=1;
			if(flag&&str.compare("Characteristics")==0)
				break;
			if(flag){
				cout<<str<<endl;
			}
		}
		ifs.close();
	}
	
	return 0;
}
