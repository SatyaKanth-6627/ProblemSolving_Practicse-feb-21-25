// Problem Link
// https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/description/?envType=daily-question&envId=2025-02-21

// Source Code

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class FindElements {
TreeNode groot;

    public FindElements(TreeNode root) {
        if(root!=null && root.val==-1){
            root.val=0;                
        }
        solve1(root);   
        groot=root;  

        //printTree(groot); //Used for printing the new Tree
    }

    void printTree(TreeNode node){
        if(node==null){ 
            System.out.print(" null ");
            return;
        }

        System.out.print(" "+node.val);
        printTree(node.left);
        printTree(node.right);
    }



    void solve1(TreeNode node){
        if(node==null){
            return;
        }

        if(node.left !=null){
            node.left.val=2*node.val+1;                
        }
        if(node.right !=null){
            node.right.val=2*node.val+2;
        }

        solve1(node.left);
        solve1(node.right);

};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */