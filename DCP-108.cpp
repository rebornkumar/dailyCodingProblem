#include<bits/stdc++.h>
using namespace std;


int main() {
	
	string str1,str2;
	cin>>str1>>str2;

	int N = str1.size();
	int M = str2.size();
	if(N == M) {
	str1 += str1;
	for(int i=0;i<N;i++) {

		string tmp = str1.substr(i,M);
		if(tmp == str2) {
			cout<<"true"<<endl;
			return 0;
		}
	}
	}
	cout<<"false"<<endl;
}