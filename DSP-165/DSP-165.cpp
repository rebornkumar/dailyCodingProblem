#include<bits/stdc++.h>
using namespace std;

int main() {
	
	//code
	int N;
	cin>>N;
	vector<int>A(N,0);

	for(int i=0;i<N;i++) {
	cin>>A[i];
	}

	stack<int>stk;
	vector<int>ans(N,0);
	int index = N-1;
	while(index>=0) {
	while(stk.empty() == false && stk.top() >= A[index]) {
	stk.pop();
	}
	ans[index] = stk.size();
	stk.push(A[index--]);
	}

	cout<<"Input array"<<endl;
	for(int i=0;i<N;i++) {
	cout<<A[i]<<"  ";
	}
	cout<<"\n Ouput array"<<endl;
	for(int i=0;i<N;i++) {
	cout<<ans[i]<<"  ";
	}
	//code
	return 0;
}