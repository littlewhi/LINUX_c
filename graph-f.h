#include"graphic.h"

/*邻接矩阵*/

void CreateGraphM(GraphM * g)
{
  int i,j,k;
  printf("输入顶点数和边数:>\n");
  scanf("%d %d",&g->numVertexes,&g->numEdges);
  getchar();
  for(i = 0;i<g->numVertexes;++i)
  {
    printf("V%d个结点:",i);
	scanf("%c",&g->vexs[i]);
	getchar();
  }
  //邻接矩阵的初始化
  for(i= 0;i<g->numVertexes;++i)
  {
	  for(j = 0;j<g->numVertexes;++j)
		  g->arc[i][j] = 0; /*INFINITY;*/
  }
  for(k=0;k<g->numEdges;++k)
  {
      printf("请输入边v[][]\n");
	  scanf("%d %d",&i,&j);
	  getchar();
	  g->arc[i][j] = 1;
	  g->arc[j][i] = 1;
  }
}
//深度遍历
boolean visited[MAXVEX];
int test[MAXVEX],t=0;
static void DFS(GraphM* g,int vertex)//算法实现
{
	int j = 0;
	if(visited[vertex] == true)
		return;
	test[t++] = g->vexs[vertex];
  visited[vertex] = true;
	for(j=0;j<g->numVertexes;++j)
	{
		if(g->arc[vertex][j] == 1 && !visited[j])
			DFS(g,j);
	}
}

void DFStraverse(GraphM* g)
{
	int i = 0;
  //初始化visited
  for(i=0;i<MAXVEX;++i)
  {
	visited[i] = false;
  }
  for(i=0;i<g->numVertexes;++i)
  {
	if(!visited[i])//非连通图确保每个块都被访问
		DFS(g,i);
  }
}
//广度优先

void BFStraverse(GraphM* g)
{
	int* queue = (int*)malloc(g->numVertexes * sizeof(int));
//存储节点的队列
	int front = 0,rear = 0;
  int i = 0;
  for(i=0;i<MAXVEX;++i)
	  visited[i] = false;
  for(i=0;i<g->numVertexes;++i)//非连通的确保每一个分块都被访问
  {
	  if(!visited[i])//未被访问过
	  {
		visited[i] = true;
		test[t++] = g->vexs[i];
		queue[rear++] = i;
		while(front != rear)//每一块的遍历都是直至队列空
		{
			int out = queue[front++];//出队列
			if(visited[out]!=true)
			{
				visited[out] = true;
				test[t++] = g->vexs[out];
				//相连的节点入队
				int j = 0;
				for(;j<g->numVertexes;++j)
				{
					if(g->arc[out][j] != 0 && !visited[j])
					queue[rear++] = j;
				}
			}
		}
	  }
  }
}
/*---------------------------------------------*/

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
/*-----------------------------------------------*/


