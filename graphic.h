#define OK 1
#define ERROR 0
#define MAXVEX 100
#define INFINITY 65535
#define true 1
#define false 0

typedef int Status;
typedef char VertexType;
typedef int EdgeType;
typedef int boolean;

typedef struct//矩阵形式
{
  VertexType vexs[MAXVEX];//头表
  EdgeType arc[MAXVEX][MAXVEX];//边表
  int numVertexes,numEdges;//数量记录
}GraphM;

//邻接表形式adjlist

typedef struct EdgeNode//边表
{
  int adjvex;//临界点域,存储该节点的下标
//  EdgeType weight;//存储网的权值
  struct EdgeNode* next;//下一个边节点
}EdgeNode;

typedef struct TexNode//头表
{
  VertexType data;//数据域
  EdgeNode* firstedge;//指向第一个边
}TexNode,AdjList;

typedef struct//总体结构
{
  AdjList* adjlist;
  int numVertexes,numEdges;
}GraphL;

