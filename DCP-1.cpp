#include <bits/stdc++.h>
using namespace std;

bool helper(vector<int>&A,int K)
{
	int N=A.size();
	unordered_map<int,int>hash;
	for(int i=0;i<N;i++)
	{
		if(hash.find(A[i]) == hash.end())
		{
			hash[A[i]] = 1;
		}
		else
		{
			hash[A[i]]++;
		}
	}
	
	for(int i=0;i<N;i++)
	{
		if(A[i]*2 == K && hash[A[i]] >=2)
		{
			
			return true;
		}
		else if(hash.find(K-A[i]) != hash.end())
		{
			return true;
		}
	}
	return false;
}
int main() 
{
	//code
	int N;
	cin>>N;
	vector<int>A(N,0);
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	int K;
	cin>>K;
	bool flag = helper(A,K);
	if(flag)
	cout<<"SUCCESS"<<endl;
	else
	cout<<"FAIl"<<endl;
	//code
	return 0;
}