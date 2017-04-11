// 从s读到"<"把这之间的东西搞出来一个一行 
/*
思路：
1.抓到s，获取s到<之间的内容，把奇怪的东西转换成'_'
2.创建新列
例：ALTER TABLE usda_plants ADD fs_uses TEXT;
3.在抓到下一个s之前，把所有夹杂在>和<的文本提取出来，
去掉引号并把分号变成'.' 
4.update信息
例：UPDATE usda_plants SET fs_uses='666' WHERE symbol='abam';
*/
#include <bits/stdc++.h>
using namespace std;
ifstream ifs0,ifs;
string s="TimesNewRomanPS-BoldMT;font-size:13px\">";
string al1="ALTER TABLE usda_plants ADD ";
string colName;// 如fs_uses，要做 
string base;
string al2=" TEXT;";
string symbol;// 如abam，要做
string up1="UPDATE usda_plants SET ";
string up2=" WHERE symbol='";
string up3="';";
string text="";
bool isok(char c);
bool canopen();// 设置ifs，更新symbol 
void altersql(){cout<<al1+colName+al2<<endl;}
void updatesql(){cout<<up1+colName+"='"+text+"'"+up2+symbol+up3<<endl;}
void adjColName();
void adjText();
int main(){
	ifs0.open("a.txt");freopen("sql.sql","w",stdout);
	base="fs_";/////////////////////////
	char c;
	bool flag,isread,istext;//flag控题目 isread控内容 
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
					// 从此要开始找text
					// 直到再次找到flag=1 
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
	// ifs0是a.txt 
	string fname,tstr;
	ifs.close();
	int l;
	if(ifs0>>tstr){
		l=tstr.length();
		for(int j=0;j<l-4;j++)fname+=tstr[j];
		fname+=".html";
		ifs.open(fname.data());
		symbol="";
		// 更新symbol 对ccpg_那个不可用，其他都ok 
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


