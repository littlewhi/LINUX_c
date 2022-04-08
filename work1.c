#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
typedef int Status;
typedef signed char Elemtype;
#define OK 1
#define ERROR 0

//单链表结构
typedef struct LinkList
{
  Elemtype data;//数据域
  struct LinkList* next;//指针域
}Node,*LinkList;

//初始化单链表,创建一个头指针与一个头结点
Status InitList(LinkList l)
{
  l->next = NULL;//初始化头结点
  l->data = 0;
  return OK;
}

//判断是否为空
int Empty(LinkList l)
{
	if(l->next)
        return 0;
	else
		return 1;
}

int Length(LinkList l)
{
  return (int)(l->data);
}

Elemtype InsertList(LinkList l,Elemtype e,int i)//在第i个元素之前插入
{
   if(i<0 || i>Length(l)+1)
	   return 0;
    Node* new =(Node*)malloc(sizeof(Node));//新节点
	++(l->data);
   while(--i)
     l = l->next;
   new->data = e;//节点值
   new->next = l->next;
   l->next = new;
   return e;
}

//获取
Status GetElem(LinkList l,int i,Elemtype* e)
{
  if(i<0 || i>Length(l) || Empty(l))
	  return ERROR;
  Node* p = l->next;
  while(--i)
  {
	  p = p->next;
  }
  *e = p->data;
  return OK;
}

//定位查找
int LocateElem(LinkList l,Elemtype e)
{
  if(Empty(l))
	 return ERROR;
  Elemtype t;
  int i = 1;
  while(GetElem(l,i,&t))
  {
     if(t == e)
		 return i;
	 i++;
  }
  return ERROR;
}

//删除
Status DeleList(LinkList l,Elemtype* e,int i)//删除第i个
{
  if( i < 0|| i > Length(l) || Empty(l))
	  return ERROR;
  Node* p = (Node*)malloc(sizeof(Node));
  while(--i)
	  l = l->next;
  p = l->next;
  *e = p->data;
  l->next = p->next;
  free(p);
  return OK;
}

//创建单链表
Status Create_head(LinkList l,Elemtype* e,int i)
{
  if(!Empty(l))
	 return ERROR;
  int j = 0;
  while(i - j)
  {
    InsertList(l,*(e+j),1);
	j++;
  }
  return OK;
}

Status Create_tail(LinkList l,Elemtype* e,int i)
{
  if(!Empty(l))
	  return ERROR;
  int j = 0;
  while(i - j)
  {
    InsertList(l,*(e+j),l->data+1);
    ++j;
  }
  return OK;
}

//销毁
Status DestoryList(LinkList l)
{
	Elemtype e;
  if(Empty(l))
	  return ERROR;
  while(DeleList(l,&e,1));
  free(l);
  l = NULL;
  return OK;
}

//输出
Status DispList(LinkList l)
{
  if(Empty(l))
	  return ERROR;
  Elemtype e;
  int i = 1;
  while(GetElem(l,i++,&e))
  {
   	printf("%c ",e);
  }
  return OK;
}


int main()
{
  int i = 0;
  Elemtype a[10],e;
  struct LinkList h ={0};
  InitList(&h);
  scanf("%s",a);
  Create_tail(&h,a,strlen(a));
  DispList(&h);
  printf("%d\n",Length(&h));
  if(Empty(&h))
	  printf("此链表为空\n");
  else
	  printf("此链表不为空\n");
  GetElem(&h,3,&e);
  printf("%c\n",e);
  LocateElem(&h,'V');
  InsertList(&h,'D',7);
  DispList(&h);
  DeleList(&h,&e,1);
  DispList(&h);
  DestoryList(&h);
  return 0;
}













