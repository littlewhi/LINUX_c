#include<stdio.h>
#include<stdlib.h>
/*
  深度优先的搜索方法
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
	if(!p && !q)
		return true;
	else if(!p || !q)
		return false;
	else if(p->val != q->val)
		return false;
	else
	    return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
}
*/

//宽度优先的搜索,创建个队列来存储当前的节点,
//刚开始给队列初始化时先放如根结点,
//1.先比较节点中的数据,相等则继续,
//2.比较左右节点的结构,若相同,则将子节点(先左后右)放入队列,主节点出队列,
//3.不同的话就是不同了,
//如果最后队列都为空,则两个b树相同,
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
 if(!p && !q)
	 return true;
 else if(!p || !q)
	 return false;
 //上面两个是特殊情况
 struct TreeNode** que1 = (TreeNode**)malloc(sizeof(struct TreeNode**));//创建队列
 struct TreeNode** que2 = (TreeNode**)malloc(sizeof(struct TreeNode**));
 int left1 = right1 = 0;
 int left2 = right2 = 0;
 *que1 = p,++right1;//根结点的赋值
 *que2 = q,++right2;
 while(left1 < right1 && left2 < right2)
 {
   
   if(*(que1+left1)->val != *(que2->left2)->val)//比较节点中的值
	   return false;
   --left1,--left2;//相当于主节点的出队
   struct TreeNode* ltr1 = *(que1+left1)->left;//左右节点的暂时存储
   struct TreeNode* ltr2 = *(que2+left2)->left;
   struct TreeNode* rtr1 = *(que1+left1)->right;
   struct TreeNode* rtr2 = *(que2+left2)->right;
   if((!ltr1 && ltr2) || (ltr1 && !ltr2))//左右节点的比较
	   return false;
   if((!rtr1 && rtr2) || (rtr1 && !rtr2))/*((rtr1==NULL) ^ (rtr2==NULL))好并且快*/
	   return false;
   if(ltr1)//若左节点不为空,入队
   {
	   que1 = (struct TreeNode**)realloc(que1,sizeof(struct TreeNode**)*++right1);
	   *(que1+right1-1) = ltr1;
	   que2 = (struct TreeNode**)realloc(que2,sizeof(struct TreeNode**)*++right2);
	   *(que2+right2-1) = ltr2;
   }
   if(rtr1)//若右节点不为空,入队
   {
       que1 = (struct TreeNode**)realloc(que1,sizeof(struct TreeNode**)*++right1);
	   *(que1+right1-1) = rtr1;
	   que2 = (struct TreeNode**)reallco(que2,sizeof(struct TreeNode**)*++right2);
	   *(que2+right2-1) = rtr2;
   }
 }
 return ((left1-right1) ^ (left2-right2))//其实,返回true就行,因为都是一对一对的入队,不同的情况就会在前面false了,
}

int main()
{
  return 0;
}
