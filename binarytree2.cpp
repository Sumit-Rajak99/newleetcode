class Solution {
public:
    vector<int> inorder;

    void dfs(TreeNode* root) {
        if (!root) return;
        dfs(root->left);
        inorder.push_back(root->val);
        dfs(root->right);
    }

    TreeNode* build(int l, int r) {
        if (l > r) return NULL;
        int mid = (l + r) / 2;
        TreeNode* root = new TreeNode(inorder[mid]);
        root->left = build(l, mid - 1);
        root->right = build(mid + 1, r);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        dfs(root);
        return build(0, inorder.size() - 1);
    }
};
