#include<stdio.h>
 int count=0;
/* A tree TreeNode structure */
struct TreeNode
{
  int data;
  struct TreeNode *left;
  struct TreeNode *right;
};
int answer(struct TreeNode *TreeNode)
{
    if(TreeNode == NULL)
      return 0;
    int old_val = TreeNode->data;
    TreeNode->data = answer(TreeNode->left) + answer(TreeNode->right);
    return TreeNode->data + old_val;
}
void printInorder(struct TreeNode* TreeNode)
{
     if (TreeNode == NULL)
          return;
     printInorder(TreeNode->left);
     //printf("%d ", TreeNode->data);
     if((TreeNode->data)%2==0)
        count++;
     printInorder(TreeNode->right);
}
 
/* Utility function to create a new Binary Tree TreeNode */
struct TreeNode* newTreeNode(int data)
{
  struct TreeNode *temp = new struct TreeNode;
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
