#include <bits/stdc++.h>
using namespace std;
/*
��ȡ���ԣ�
��Ȼ��"Symbol:" ��ʼ��"Group��"ǰ���� 
 "Group:"��һ�ֶ�ǰ���� 
 "Family:"��һ�ֶ�ǰ����
 "Duration:"��һ�ֶ�ǰ����
 "Growth" "Habit:"��ƴ�����ַ�����һ�ֶ�ǰ����
 
 Native Status:��Ȼ���ɣ�1���ַ�����1���ַ�
 ��������ȡ���� �ڶ������ǵ����ַ�ʱֹͣ 
 
*/
int main(){
	freopen("b3.txt","w",stdout);
	string str;
	ifstream ifs;
	string s1="profile (";
	char s2[10];// ���� 
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
