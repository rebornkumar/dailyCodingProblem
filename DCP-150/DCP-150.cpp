#include<bits/stdc++.h>
using namespace std;

int main () {
	//code
	int N;
	cin>>N;
	vector<pair<int,int>>A(N);
	int X,Y;
	for(int i=0;i<N;i++) {
		cin>>X>>Y;
		A[i].first = X;
		A[i].second = Y;
	}
	cin>>X>>Y;
	int K;
	cin>>K;
	vector<pair<int,int>> vec(N);
	for(int i=0;i<N;i++) {
		vec[i].first = abs(X-A[i].first) + abs(Y-A[i].second);
		vec[i].second = i;
	}
	sort(vec.begin(),vec.end());

	for(int i=0;i<K;i++) {
		int index = vec[i].second;
		vec[i].first = A[index].first;
		vec[i].second = A[index].second;
	}
	while(vec.size() != K) {
		vec.pop_back();
	}

	for(int i=0; i<K; i++) {
		cout<<"X = "<<vec[i].first<<", "<<"Y = "<<vec[i].second<<endl;
	}
	//code
	return 0;

}