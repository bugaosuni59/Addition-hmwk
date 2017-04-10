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
	freopen("b3.txt","w",stdout);
	string str;
	ifstream ifs;
	string s1="profile (";
	char s2[10];// 数字 
	string s3=").txt";
	int flag=0;
	string str0="_";
	string stem;
	for(int i=1;i<=997;i++){
		sprintf(s2,"%d",i);
		str=s1+s2+s3;
		ifs.open(str.data());
		flag=0;
		while(ifs>>str){
			if(str.compare("Symbol:")==0)
				flag=1;
			if(str.compare("Group:")==0){
				flag=2;				
				cout<<endl;
			}
			if(str.compare("Family:")==0){
				flag=3;
				cout<<endl;				
			}
			if(str.compare("Duration:")==0){
				flag=4;
				cout<<endl;				
			}
			if(str.compare("Habit:")==0){
				flag=5;
				cout<<endl;				
			}
			if(str.compare("Status:")==0){
				flag=6;
				cout<<endl;				
			}
			if(flag==1&&str.compare("Symbol:")!=0){
				cout<<str;
			}
			if(flag==2&&str.compare("Group:")!=0){
				cout<<str+str0;
			}
			if(flag==3&&str.compare("Family:")!=0){
				cout<<str+str0;
			}
			if(flag==4&&str.compare("Duration:")!=0&&str.compare("Growth")!=0){
				cout<<str+str0;
			}
			if(flag==5&&str.compare("Habit:")!=0&&str.compare("Native")!=0){
				cout<<str+str0;
			}
			if(flag==6&&str.compare("Status:")!=0){
				ifs>>stem;
				if(stem.length()!=1&&!(stem.length()==2&&stem[1]=='?')){
					cout<<endl;
					ifs.close();
					break;
				}
				cout<<str+str0+stem+str0;
			}
		}
	}
	return 0;
}
