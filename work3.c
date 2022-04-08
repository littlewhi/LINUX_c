#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

typedef int Status;
typedef char Elemtype;
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
      Node* p =(Node*)malloc(sizeof(Node));//头结点
	  if(p==NULL)
		  printf("%s",strerror(errno));
	  l = p;
        l->next = NULL;//初始化头结点
          l->data = 0;
            return OK;
            }
           //判断是否为空
int Empty(LinkList l)
 {
 if(l->next == NULL)
	 return 1;
 }

int Length(LinkList l)
 {
                  return l->data;
                  }

                  Elemtype InsertList(LinkList l,Elemtype e,int i)//在第i个元素之前插入
                  {
                     if(i<0 || i>Length(l)+1)
                            return 0;
                                Node* new =(Node*)malloc(sizeof(Node));//新节点
                                    l->data++;
                                      while(--i)
                                            l = l->next;
                                               new->data = e;//节点值
                                                  new->next = l->next;
                                                     l->next = new;
                                                        return e;
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
                                                                                    Status Create_head(LinkList l)
                                                                                    {
                                                                                      if(!Empty(l))
                                                                                          return ERROR;
                                                                                             Elemtype e;
                                                                                               while((e=getchar()) != EOF)
                                                                                                 {
                                         InsertList(l,e,1);                                                                                                         getchar();
 }  return OK;
}
int main()
{
  LinkList p;
  InitList(p);
  return 0;
}
