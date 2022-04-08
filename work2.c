#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

//using namespace std;
//
typedef int Status;
typedef char Elemtype;
#define OK 1
#define ERROR 0;

////单链表结构
//typedef struct LinkList
//{
//	Elemtype data;//数据域
//		struct LinkList* next;//指针域
//		}*LinkList,Node;
//
//		 //初始化单链表,创建一个头指针与一个头结点
//		 Status InitList(LinkList l)
//		 {
//			l = (Node*)malloc(sizeof(Node));//头结点
//				l->next = NULL;//初始化头结点
//					l->data = 0;
//						return OK;
//						}
//
//						//判断是否为空
//						int Empty(LinkList l)
//						{
//							if (!(l->next))
//									return 1;
//									}
//
//									//判断是否满
//									int Length(LinkList l)
//									{
//										return l->data;
//										}
//
//										//插入
//										Elemtype InsertList(LinkList l, Elemtype e, int i)//在第i个元素之前插入
//										{
//											if (i<0 || i > length(l) + 1)
//													return 0;
//														Node* new = (Node*)malloc(sizeof(Node));//新节点
//															l->data++;
//																while (--i)
//																		l = l->next;
//																			new->data = e;//节点值
//																				new->next = l->next;
//																					l->next = new;
//																						return e;
//																						}
//
//																						//删除
//																						Status DeleList(LinkList l, Elemtype* e, int i)//删除第i个
//																						{
//																							if (i < 0 || i > Length(l) || Empty(l))
//																									return ERROR;
//																										Node* p = (Node*)malloc(sizeof(Node));
//																											while (--i)
//																													l = l->next;
//																														p = l->next;
//																															*e = p->data;
//																																l->next = p->next;
//																																	free(p);
//																																		return OK;
//																																		}
//																																		int main()
//																																		{
//																																			int i = 0;
//																																				LinkList l;
//																																					InitList(l)
//																																						for (i = 0; i < 5; i++)
//																																							{
//																																									InsertList(l, '1' + i, i + 1);
//																																										}
//																																											for (i = 0; i < 5; i++)
//																																												{
//																																														l->next;
//																																																printf("%s ", l->data);
//																																																	}
//																																																		//cout << "Hello world!" << endl;
//																																																			return 0;
//																																																			}
//
