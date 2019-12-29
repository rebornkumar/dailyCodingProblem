#include<bits/stdc++.h>
using namespace std;

int getSum(vector<int>&A,int start,int end) {

	int N = A.size();

	vector<int>tmp(N+1,0);
	for(int i=0;i<N;i++) {
		tmp[i+1] = tmp[i] + A[i];
	}
	return tmp[end] - tmp[start];
}

int main () {
	//code
	int N;
	cin>>N;

	vector<int>A(N,0);
	for(int i=0;i<N;i++) {
		cin>>A[i];
	}
	int start,end;
	cin>>start>>end;

	int ans = getSum(A,start,end);
	for(int i=start;i<end;i++) {
		cout<<A[i]<<", ";

	}
	cout<<"\nans = "<<ans<<endl;
	//code
	return 0;
}
