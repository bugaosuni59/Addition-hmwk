// ��s����"<"����֮��Ķ��������һ��һ�� 
/*
˼·��
1.ץ��s����ȡs��<֮������ݣ�����ֵĶ���ת����'_'
2.��������
����ALTER TABLE usda_plants ADD fs_uses TEXT;
3.��ץ����һ��s֮ǰ�������м�����>��<���ı���ȡ������
ȥ�����Ų��ѷֺű��'.' 
4.update��Ϣ
����UPDATE usda_plants SET fs_uses='666' WHERE symbol='abam';
*/
#include <bits/stdc++.h>
using namespace std;
ifstream ifs0,ifs;
string s="TimesNewRomanPS-BoldMT;font-size:13px\">";
string al1="ALTER TABLE usda_plants ADD ";
string colName;// ��fs_uses��Ҫ�� 
string base;
string al2=" TEXT;";
string symbol;// ��abam��Ҫ��
string up1="UPDATE usda_plants SET ";
string up2=" WHERE symbol='";
string up3="';";
string text="";
bool isok(char c);
bool canopen();// ����ifs������symbol 
void altersql(){cout<<al1+colName+al2<<endl;}
void updatesql(){cout<<up1+colName+"='"+text+"'"+up2+symbol+up3<<endl;}
void adjColName();
void adjText();
int main(){
	ifs0.open("a.txt");freopen("sql.sql","w",stdout);
	base="fs_";/////////////////////////
	char c;
	bool flag,isread,istext;//flag����Ŀ isread������ 
	int i;
	int len=s.length();
	while(canopen()){
		i=0;
		flag=0;
		while(ifs.get(c)){
			if(isread){
				if(c=='<'){
					istext=0;
				}
				if(istext){
					text+=c;
				}
				if(c=='>'){
					istext=1;
				}
			}
			if(c==' '||c=='\n'||c=='\t')continue;
			if(c==s[i]){
				i++;
				if(i==len){
					if(text.length()>1){
						adjText();
						updatesql();
						isread=0;
						istext=0;
					}
					flag=1;colName="";
					colName+=base;
				}
			}else i=0;
			if(flag){
				if(c=='<'){
					adjColName();
					altersql();
					flag=0;
					i=0;
					text="";
					isread=1;
					istext=0;
					// �Ӵ�Ҫ��ʼ��text
					// ֱ���ٴ��ҵ�flag=1 
				}
				else{
					if(c!='>'&&c!=' '&&c!='\n')
						colName+=c;
				}
			}
		}
	}
	
	return 0;
}
bool isok(char c){
	if(c>='0'&&c<='9')return 1;
	if(c>='a'&&c<='z')return 1;
	if(c>='A'&&c<='Z')return 1;return 0;
}
bool canopen(){
	// ifs0��a.txt 
	string fname,tstr;
	ifs.close();
	int l;
	if(ifs0>>tstr){
		l=tstr.length();
		for(int j=0;j<l-4;j++)fname+=tstr[j];
		fname+=".html";
		ifs.open(fname.data());
		symbol="";
		// ����symbol ��ccpg_�Ǹ������ã�������ok 
		for(int j=3;j<l-4;j++)symbol+=tstr[j];
		return 1;
	}else ifs0.close();
	return 0;
}
void adjColName(){
	int len=colName.length();
	for(int i=0;i<len;i++){
		if(!isok(colName[i]))
			colName[i]='_';
	}	
}
void adjText(){
	int len=text.length();
	for(int i=0;i<len;i++){
		if(text[i]=='\''||text[i]=='"')text[i]=' ';
		if(text[i]==';')text[i]='.';
	}

}


