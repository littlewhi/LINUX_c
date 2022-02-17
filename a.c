//#include<stdlib.h>

typedef struct TreeNode
{
	  int val;
	    TreeNode* left;
		  TreeNode* right;
}tree;
/*

//迭代版
//递归本身就是一种隐式栈,而在迭代中就只能是将栈显示实现
//但是栈中总是存储左节点,每弹出一个左节点就会向上回溯双亲节点(其实也就是这步把右节点也放入栈中),在将双亲节点中的左节点统统放入栈中
int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
  int top = -1;//栈顶
  int* ret = (int*)malloc(sizeof(int)*101);
  int* p = ret;
  struct TreeNode** s = (struct TreeNode**)malloc(sizeof(int*)*101);
  //s就是那个栈,用来存储树节点的地址
  *returnSize = 0;
  while(root || top!= -1 )//刚开始进入的时候top=-1,但是root非空,之后经过入栈操作后就大于-1了,但root会常有NULL出现,所以两者的一起判断就很好
  {
    while(root)
	{
	  *(s+(++top)) = root;
	  root = root->left;
	}
	root = *(s+top--);//地址先出栈
	*(ret+((*returnSize)++)) = root->val;//进入返回数组
	root = root->right;//进入右节点,不过总会有空指针出现
  }
  return ret;
}
*/

/*
//递归版本的简单,但注意这个returnsize,是个重要的调控变量,也是访问返回的数组的不越界的量.
void inorder(struct TreeNode* root, int* size, int* ret)
{
    if(root == NULL)
	    return
  inorder(root->left,size,ret);
  *(ret+size++) = root->val;
   inorder(root->right,size,ret);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
  int* ret = (int*)malloc(sizeof(int) * 101);
  if(ret ==NULL)
	  return NULL;
  *returnSize = 0;
  inorder(root,returnSize,ret); 
  return ret;
}
*/

//morris版本
//当前节点为x,
//1.若x无左孩子,就证明他够左,可以获取数据了,再向右访问了,x = x.right,
//2.若有左孩子,也就证明他不够左,就得先去寻找中序遍历的前驱记作front(寻找方法:x先向左移动一个节点,之后向右移动,直到不能再向右为止),
//1)若front中无右子,则将front指向x,front.right = x,
//2)若有右孩子,那么就证明此时是第二遍访问此front,也就证明x的左子树获取完毕了.获取x的数据,并置空front的right,来到x右节点,front.right=NULL,
//x=x.right,

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
 int* ret = (int*)malloc(sizeof(int)*101);
  *returnSize = 0;
  struct TreeNode* front;
  while(root)
  {
    if(root->left)
	{
		//能进来就说明得儿先寻找front,
	  front = root->left;
	  while(front->right && front->right != root)//这第二个判断条件就是为了第二次的访问准备,第二次访问时已经有了连接,容易死循环,
		  front = front->right;
	  if(!front->right)//第一次访问,建立连接,
		  front->right = root;
	  else//第二次访问,将x获取数据,置空front.right,
	  {
		  *(ret+(*returnSize)++) = root->val;
		  root = root->right;
		  front->right = NULL;
	  }
	}
	else//这是到了此时的最左的节点了
	{
	  *(ret+(*returnSize)++) = root->val;
	  root = root->right;
	}
  }
  return ret;
}

int main()
{  
  tree t;

 // int* inorderTraversal(struct TreeNode* root, int* returnSize)
  int* p = inorderTraversal();
  return 0;
}

