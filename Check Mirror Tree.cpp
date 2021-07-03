/*
Check whether the  given two trees are mirrored trees or not

*/

// Complete the checkMirrorTree function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

bool checkMirrorTree(node* a, node* b)
{
    //write your code here
    if(a==NULL && b==NULL){
      return true;
    }
    if(a!=NULL && b!=NULL){
      if(a->value!=b->value){
        return false;
      }
      return checkMirrorTree(a->left,b->right) && checkMirrorTree(a->right,b->left);
    }
    return false;
}
