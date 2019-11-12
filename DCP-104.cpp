#include <bits/stdc++.h>
using namespace std;

struct DoublyListNode {
	int val;
	DoublyListNode* next;
	DoublyListNode* prev;

	DoublyListNode(int x) : val(x), next(NULL), prev(NULL) {}
};

DoublyListNode* createDoublyListNode(DoublyListNode* head,DoublyListNode* curr,vector<int>&A,int index) {

	if(index == A.size())
	{
		return head;
	}
	if(index == 0) {
		head = new DoublyListNode(A[index]);
		DoublyListNode*  curr = head;
		return createDoublyListNode(head,curr,A,index+1);
	}
	DoublyListNode*  doublyListNode= new DoublyListNode(A[index]);

	curr -> next = doublyListNode;
	doublyListNode->prev = curr;
	curr = doublyListNode;
	return createDoublyListNode(head,curr,A,index+1);
}
bool isPalindrome(DoublyListNode* head) {
	if(head == NULL) return true;

	DoublyListNode* tail = head;
	while(tail->next) {
		tail = tail->next;
	}

	while(head) {
		if(head -> val != tail -> val) {
			return false;
		}
		else {
			head = head->next;
			tail = tail -> prev;
		}
	}
	return true;
}

int main() {
	int N;
	cin>>N;
	vector<int>A(N,0);

	for(int i=0;i<N;i++) {
		cin>>A[i];
	}

	int index = 0;
	DoublyListNode* head = createDoublyListNode(NULL,NULL,A,index);
	bool flag = isPalindrome(head);
	if(flag) {
		cout<<"LIST IS PALINDROME"<<endl;
	}
	else {
		cout<<"LIST IS NOT A PALINDROME"<<endl;
	}

	return 0;
}