#include<stdio.h>
#include<string.h>

int get_next(int next[],char t[])
{
  
}

int main()
{
  char* arr[] = {"abcdex","abcabx","ababaaaba","aaaaaaaab"};
  int next[4][255] = {0};
  int i;
  for(i = 0;i<4;i++)
  {
    get_next(next[i],arr[i]);
  }
  for(i = 0;i<4;i++)
  {
    int j = 0;
    for(j = 0;j<strlen(arr[i]);j++)
      {
        printf("%d",next[i][j]);
      } 
    printf("\n");
  }
  return 0;
}
