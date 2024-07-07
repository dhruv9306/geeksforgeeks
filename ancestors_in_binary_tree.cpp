class Solution {
  public:
    // Function should return all the ancestor of the target node
    bool dhruv( struct Node* root,int target,vector<int>&ans){
        if(root==NULL){
            return false;
        }
        if(root->data==target){
            return true;
        }
        if(dhruv(root->left,target,ans) || dhruv(root->right,target,ans)){
            ans.push_back(root->data);
            return true;
        }
        
        return false;
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int>ans;
        dhruv(root,target,ans);
        return ans;
    }
};
