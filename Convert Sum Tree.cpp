/*
A SumTree is a Binary Tree where the value of a node is equal to sum of the nodes present in the left subtree and right subtree. 
You are given a binary tree and the task is to covert that tree into SumTree. 


Note -
You have to complete convertSumTree() function, no need to implement the tree.
Consider empty tree as sumTree with sum=0.
Consider leaf nodes as sumTree.

Input format
Root of the tree is passed to the convertSumTree().
And the tree is constructed in level order format.

Output format
No need to print anything, convert the tree inplace. 
Also leaf will have value=0.

*/

int convertToSumTree(node *node)
{
    //write your code here
    if(node==NULL){
      return 0;
    }
    if(node->left==NULL && node->right==NULL){
      int sum = node->value;
      node->value=0;
      return sum;
    }
    int l_sum=convertToSumTree(node->left);
    int r_sum=convertToSumTree(node->right);
    int pres=node->value;
    node->value = l_sum+r_sum;
    return pres+l_sum+r_sum;
}
