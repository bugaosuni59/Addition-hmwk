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
//	freopen("a.txt","r",stdin);
//	freopen("profile.txt","r",stdin);
	freopen("b.txt","a",stdout);
	string str;
	ifstream ifs;
	string s1="profile (";
//	string s2;//���� 
	char s2[10];// ���� 
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
