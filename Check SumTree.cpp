/*
A SumTree is a Binary Tree where the value of a node is equal to sum of the nodes present in the left subtree and right subtree. You are given a binary tree and the task is to return true (1 in case of C language) if given binary tree is SumTree else return false(0 in case of C language). 

Note -

You have to complete checkSumTree() function, no need to implement the tree.
Consider empty tree as sumTree with sum=0.
Consider leaf nodes as sumTree.
Input format
Root of the tree is passed to the checkSumTree().
And the tree is constructed in level order format.

Output format
Return true(1 in case of C language) if given binary tree is SumTree else return false(0 in case of C language). 

Constraints
1<=N<=64

Example
Input
48 12 12 6 6 6 6 -1 -1 -1 -1 -1 -1 -1 -1

Note - Level order traversal of input tree, where 
−1 represents null nodes.

Output
true
*/

// Complete the checkSumTree function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

int Check(node* node){
  if(node==NULL){
    return 0;
  }
  if(node->left==NULL && node->right==NULL){
    return node->value;
  }
  int l_sum = Check(node->left);
  int r_sum = Check(node->right);
  if(l_sum+r_sum == node->value){
    return l_sum+r_sum+node->value;
  }
  return 0;
}

bool checkSumTree(node* n)
{
    //write your code here
    if(n==NULL){
      return true;
    }
    if(Check(n)){
      return true;
    }
    return false;
}
