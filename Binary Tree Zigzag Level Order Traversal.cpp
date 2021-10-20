//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)return ans;
        queue<TreeNode*> qu;
        qu.push(root);
        int level=1;
        while(!qu.empty())
        {
            int s=qu.size();
            vector<int> temp;
            while(s--)
            {
                TreeNode* t=qu.front();
                qu.pop();
                temp.push_back(t->val);
                if(t->left)qu.push(t->left);
                if(t->right)qu.push(t->right);
            }
            if(level%2==0)
            {
                reverse(temp.begin(),temp.end());
            }
            ans.push_back(temp);
            level++;
        }
        return ans;
    }
};