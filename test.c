//合并两个非递减序列的数组

//从nums2中拿出元素插入到nums1中,每插入一个就要移动nums1中的后面的元素
/* void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size,  int n)
{
  int p1=0,p2=0;
  while(p1<m+p2 && p2<n)
  {
	if(*(nums1+p1) > *(nums2+p2))
	{
	  int i = 0;
	  while(p1 < (p2+m-i))
	  {
		  *(nums1+p2+m-i) = *(nums1+p2+m-i-1);
		  ++i;
	  }
	  *(nums1+p1++) = *(nums2+p2++);
    }
	else
	  ++p1;
  }
  while(p2<n)
    *(nums1+p1++) = *(nums2+p2++);
}


int main()
{
  int nums1[30] = {1,2,3,0,0,0};
  int nums2[15] = {2,5,6};
  int i = 0;
  merge(nums1,30,3,nums2,15,3);
  return 0;
}
*/

//后端调用双指针法
//非递减序列就可以是将后面的大的比较挑选出来放在nums1的后面的空白处,节省空间,但应该注意数组向前越界的情况.并且注意判断只有两个数组都到头了才是结束.
/*void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size,  int n)
{
  int p1 = m - 1,p2 = n - 1,tail = m+n-1;
  while(p1>-1 || p2>-1)
  {
	if(p1 == -1)
		*(nums1+tail) = *(nums2+p2--);
	else if(p2 == -1)
		*(nums1+tail) = *(nums1+p1--);
	else if(*(nums1+p1)>*(nums1+p2))
		*(nums1+tail) = *(nums1+p1--);
	else
		*(nums1+tail) = *(nums2+p2--);
	--tail;
  }
}


int main()
{
  int nums1[6] = {1,2,3};
  int nums2[3] = {2,5,6};
  merge(nums1,6,3,nums2,3,3);
  return 0;
}

*/

//空间优化版,有这么一种情况,就是当nums2中的元素都已经合并完毕了,
//也就不需要再进行自身的元素搬运,节省了存储命令的空间,
//但这就会导致判断条件的改变,不得不稍作调整.
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size,  int n)
{
	 int p1 = m - 1,p2 = n - 1,tail = m+n-1;
	 while(p2>-1 && p1 > -1)
	 {
	     if(*(nums1+p1)>*(nums2+p2))
	       *(nums1+tail) = *(nums1+p1--);
	     else
	       *(nums1+tail) = *(nums2+p2--);
	      --tail;
	  }
	  while(p1 == -1 && p2 > -1)
	    *(nums1+tail--) = *(nums2+p2--);
					   
					   
}
