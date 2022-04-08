
#include<stdio.h>
#include<stdlib.h>
#include"graphic.h"

/*邻接链表*/ //有向图
void CreateGraphL(GraphL* g)
{
	int i,j,k,w;
	printf("输入顶点数和边数:>\n");
	scanf("%d %d",&g->numVertexes,&g->numEdges);
	getchar();
	g->adjlist = (TexNode*)malloc(sizeof(TexNode)* g->numVertexes);
	for(i=0;i<g->numVertexes;++i)
	{
		printf("第V%d顶点的值",i);
		scanf("%c",&(g->adjlist[i].data));
		getchar();
	}
	for(i=0;i<g->numEdges;++i)
	{
		printf("请输入边V[][]--");
		scanf("%d %d",&j,&k);
		EdgeNode* p = (EdgeNode*)malloc(sizeof(EdgeNode));
		p->adjvex = k;//存储后面节点
		p->next=g->adjlist[j].firstedge;
		g->adjlist[j].firstedge = p;
	}
}

int main()
{
	int i,j;
	GraphL g2 = {0};
	CreateGraphL(&g2);
	for(i=0;i<g2.numVertexes;++i)
	{
		EdgeNode* e = g2.adjlist[i].firstedge;
		printf("V%d",i);
		while(e)
		{
			printf(" -> V%d",g2.adjlist[i].firstedge->adjvex);
			e = e->next;
		}
		printf("\n");
	}
//	GraphM g1 = {0};
/*	CreateGraphM(&g1);
	for(i=0;i<g1.numVertexes;++i)
	{
		printf("V%d",i);
	  for(j=0;j<g1.numVertexes;++j)
	  {
		printf(" %d ",g1.arc[i][j]);
	  }
	  printf("\n\n");
	}
	DFStraverse(&g1);
	for(i=0;i<g1.numVertexes;++i)
		printf("V%c ",test[i]);
	printf("\n");
	BFStraverse(&g1);
	for(i=0;i<g1.numVertexes;++i)
		printf("V%c ",test[i]);
	printf("\n");*/
  return -1;
}


