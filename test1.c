#include<stdio.h>

int removefun(int* nums,int numsSize)
{
  int fast = 1;
  int slow = 0;
  if(numsSize == 1)
    return 1;
  while(fast < numsSize)
  {
    while((slow < numsSize)  && (fast < numsSize) && *(nums + fast) == *(nums + slow))
      {
         fast++;
      }
    if(fast < numsSize)
      *(nums + ++slow) = *(nums + fast);
  }
  return (slow + 1);
}

int main()
{
  int i = 0;
  int arr[] = {1, 1, 2 };
  int size = sizeof(arr) / sizeof(arr[0]);
  size =  removefun(arr,size);
  for(i = 0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
