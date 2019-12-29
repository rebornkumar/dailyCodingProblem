#include<bits/stdc++.h>
using namespace std;

vector<int>moveX = {1,1,0,-1,-1,-1,0,1};
vector<int>moveY = {0,1,1,1,0,-1,-1,-1};

bool isValid(int r,int c,int R,int C) {
	if(r>=0 && c>=0 && r<R && c<C)
	return true;
	return false;
}

void changeColor(vector<string>&A, char ch,int r,int c,int R,int C) {
    if(!isValid(r,c,R,C))
    return ;
	char tmp = A[r][c];
	int tmpX,tmpY;
	A[r][c] = ch;
	for(int i=0;i<8;i++) {
	tmpX = r+moveX[i];
	tmpY = c+moveY[i];
	if(isValid(tmpX,tmpY,R,C) && A[tmpX][tmpY] == tmp) {
	A[tmpX][tmpY]= ch;
	}
	}
}

void printMatrix(vector<string>A,int N)
{
	for(int i=0;i<N;i++) {
		for(int j=0;j<A[i].size();j++) {
		cout<<A[i][j]<<" ";
		}
		cout<<""<<endl;
	}
}
int main() {
	

	//code
	int N,M;
	cin>>N>>M;
	vector<string>A(N);
	for(int i=0;i<N;i++) {
	cin>>A[i];
	}
	cout<<"\n====================================================================================="<<endl;
	cout<<"enter 0-indexed postion of pixel"<<endl;
	cout<<"=====================================================================================\n"<<endl;
	int r,c;
	cin>>r>>c;
	char ch;
	cin>>ch;

	M = A[0].size();
	printMatrix(A,N);
	changeColor(A,ch,r,c,N,M);
	cout<<"====================================================================================="<<endl;
	cout<<"Matrix after color change"<<endl;
	cout<<"====================================================================================="<<endl;
	printMatrix(A,N);

	//code
	return 0;
}