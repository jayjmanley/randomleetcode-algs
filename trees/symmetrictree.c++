class Solution {
private: bool helperSymmetric(TreeNode* left, TreeNode* right){
  if(!left && !right) return true;
  if(!left || !right) return false;
  if(left->val != right->val ) return false;
  return helperSymmetric(left->right, right->left) && helperSymmetric(left->left, right->right);
}
public:
  bool isSymmetric(TreeNode* root) {
    if(!root){ return true; }
    return helperSymmetric(root->left, root->right);
  }
};
