/**
This problem was asked by Google.
Given a sorted list of integers, square the elements and give the output in sorted order.
For example, given [-9, -2, 0, 2, 3], return [0, 4, 4, 9, 81].
**/

#include<bits/stdc++.h>
using namespace std;

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
	int ptrNeg = -1,ptrPos = N;
	//set ptrPos,
	for(int i=0;i<N;i++)
	{
		if(A[i] >= 0)
		{
			ptrPos = i;
			break;
		}
	}
	ptrNeg = ptrPos - 1;
	
	vector<int>ans(N,0);
	int index = 0;
	while(ptrNeg >= 0 && ptrPos < N)
	{
		if(abs(A[ptrNeg]) < abs(A[ptrPos]))
		{
			ans[index++] = pow(A[ptrNeg--],2);
		}
		else
		{
			ans[index++] = pow(A[ptrPos++],2);
		}
	}
	while(ptrNeg >= 0)
	{
		ans[index++] = pow(A[ptrNeg--],2);
	}
	while(ptrPos < N)
	{
		ans[index++] = pow(A[ptrPos++],2);
	}
	for(int i=0;i<N;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<""<<endl;
	//code
return 0;
}