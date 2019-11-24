#include<bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>>&rslt, vector<int>&path,int start) {

    //base
	if(start+1 == path.size()) {
		rslt.push_back(path);
		return;
	}

	for(int i = start; i < path.size(); i++) {
		swap(path[start],path[i]);
		helper(rslt,path,start+1);
		swap(path[start],path[i]);
	}
}
int main() {
	int N;
	cin>>N;
	vector<int>A(N,0);
	for(int i = 0;i < N; i++) {
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	vector<vector<int>>rslt;
	helper(rslt,A,0);
	sort(rslt.begin(),rslt.end());
	for(int i = 0;i < rslt.size(); i++) {
		for(int j=0;j<rslt[i].size(); j++) {
			cout<<rslt[i][j];
		}
		cout<<""<<endl;
	}
	return 0;
}