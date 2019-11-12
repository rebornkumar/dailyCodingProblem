
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


vector<int> helper(TreeNode* root) {

	vector<int>ans;
	queue<TreeNode*>que;
	if(root == NULL)
		return ans;
	que.push(root);
	while(!que.empty()) {

		TreeNode* tmp = que.front();
		que.pop();
		ans.push_back(tmp->val);
		if(tmp->left) {
			que.push(tmp->left);
		}
		if(tmp->right) {
			que.push(tmp->right);
		}
	}
	return ans;
}

