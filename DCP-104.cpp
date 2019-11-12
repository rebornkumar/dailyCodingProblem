#include <bits/stdc++.h>
using namespace std;

struct DoublyListNode {
	int val;
	DoublyListNode* next;
	DoublyListNode* prev;

	DoublyListNode(int x) : val(x), next(NULL), prev(NULL) {}
};


int main() {
	int N;
	cin>>N;
	vector<int>A(N,0);

	for(int i=0;i<N;i++) {
		cin>>A[i];
	}

	DoublyListNode* head = createDDoublyListNode(A,N);
	bool flag = isPalindrome(head);
	if(flag) {
		cout<<"LIST IS PALINDROME"<<endl;
	}
	else {
		cout<<"LIST IS NOT A PALINDROME"<<endl;
	}

	return 0;
}