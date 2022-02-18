#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
typedef  int ElemType;
typedef int Status;
#define OK 1
#define ERROR 0;
typedef struct TreeNode
{
  ElemType val;
  struct TreeNode* left;
  struct TreeNode* right;
}*treenode,*tree;

void midIntr(treenode root)
{
  if(!root)
	  return;
  midIntr(root->left);
  scanf("%d",&(root->val));
  midIntr(root->right);
}

void creattr(treenode root)
{
  int in;
  scanf("%d",&in);
  if(in == -1)
	  root = NULL;
  else
  {
	  root = (treenode) malloc(sizeof(tree));
	  if(!root)
		strerror(errno);
	  creattr(root->left);
	  root->val = in;
	  creattr(root->right);
  }
}
/*
int  main()
{
  tree root;
  creattr(root);
  return 0;
}*/
