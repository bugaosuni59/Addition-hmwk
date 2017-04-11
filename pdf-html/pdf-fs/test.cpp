#include <bits/stdc++.h>
using namespace std;
ifstream ifs;
bool openf(){
	ifs.close();
	ifs.open("a.txt");
	return 1;
}
int main(){
	for(int i=0;i<10;i++){
		openf();
		string a;
		if(ifs>>a)
			cout<<a;
	}
	return 0;
}
