#include<stdio.h>

/*忽略了一个最大的问题,就是子串与母串之间的长度关系
int strStr(char* haystack,char* needle)
{
  int ph = 0,pn = 0;
  if(*(needle) == '\0')
    return 0;
  while(*(haystack + ph))
  {
    if(*(haystack + ph) == *(needle + pn))
      {
        while(*(needle + pn) && (*(haystack + ph + pn) == *(needle + pn)))
          ++pn;
        if(!*(needle + pn))
          return ph;
        ++ph,pn=0;
      }
    else
      {
        ++ph;
      }
  }
  return -1; 
}
*/
/*
int main()
{
  char a[] = "abcdef";
  char b[] = "cde";
  int i = strStr(a,b);
  if(i == -1)
    printf("不存在子串\n");
  else if(0 == i)
    printf("子串为空字符串\n");
  else
    printf("存在子串,下标为%d\n",i);
  return 0;
}
*/
#include<string.h>

int strStr(char* haystack,char* needle)
{
  int len_h = strlen(haystack),ph = 0;
  int len_n = strlen(needle),pn = 0;
  for(;ph + len_n <= len_h;ph++)
  {
    int flag = 1;
      for(pn = 0;pn<len_n;pn++)
        {
         if(*(haystack + ph + pn) != *(needle + pn))
           {
             flag = 0;
             break;
           }  
        }
      if(flag)
         return ph;
  }
  return -1;
}

int main()
{
  char a[] = "abcdef";
  char b[] = "cde";
  int i = strStr(a,b);
  if(i == -1)
    printf("不存在子串\n");
  else if(0 == i)
    printf("子串为空字符串\n");
  else
    printf("存在子串,下标为%d\n",i);
  return 0;
}



