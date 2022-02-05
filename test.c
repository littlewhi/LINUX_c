#include<stdio.h>

/*int remov(int* nums, int numsSize, int val)
{ 
  int left = 0;
  int right = numsSize - 1;
  while( left <= right)
  {
    int temp;
    while((left <= right) && (*(nums + right) == val))
      right--;
    while((left <= right) && (*(nums + left) != val))
      left++;
    if(left < right)
    {
      temp = *(nums + left);
      *(nums + left) = *(nums + right);
      *(nums + right) = temp;
    }
  }
  return (left);
}
*/
/*int main()
{
  int i = 0;
  int arr[]={0};
  int len = sizeof(arr) / sizeof(arr[0]);
  len = remov(arr,len,5);
  for(i = 0;i < len;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}*/

int remov(int* nums,int numsSize,int val)
{
  int left = 0;
  int right = numsSize;
  while(left < right)
  {
    if(*(nums + left) == val)
    {
      *(nums+left) = *(nums+right - 1);
      right--;
    }
    else
      left++;
  }

}

int main()
{
  int i = 0;
  int arr[]={0};
  int len = sizeof(arr) / sizeof(arr[0]);
  len = remov(arr,len,5);
  for(i = 0;i < len;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

