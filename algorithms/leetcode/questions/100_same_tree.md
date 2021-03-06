# 100. Same Tree

## Question link
(https://leetcode.com/problems/same-tree/)

## Question Description
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Example 1:
![Image](https://assets.leetcode.com/uploads/2020/12/20/ex1.jpg)
> Input: p = [1,2,3], q = [1,2,3]
> Output: true

Example 2:
![Image](https://assets.leetcode.com/uploads/2020/12/20/ex2.jpg)
> Input: p = [1,2], q = [1,null,2]
> Output: false

Example 3:
![Image](https://assets.leetcode.com/uploads/2020/12/20/ex3.jpg)
> Input: p = [1,2,1], q = [1,1,2]
> Output: false

Constraints:

The number of nodes in both trees is in the range [0, 100].
-10^4 <= Node.val <= 10^4

## 解题思路
tree travesal
dfs

## Code
```c++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return dfs(p, q);
    }
    
    bool dfs(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL) return true;
        if(q == NULL || p == NULL) return false;
        
        if(q->val == p->val){
            return dfs(p->left, q->left) && dfs(p->right, q->right);
        }
        
        return false;
    }
};
```

## Time Complexity Analysis