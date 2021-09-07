#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int a[10] = { 0 };
//	char b[10] = "abcdefg";
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", strlen(b));
//	return 0;
//}
//void print_b(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d * %2d = %-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//void print1(int n)
//{
//	
//	if (n > 9)
//	{
//		print1(n / 10);
//        
//		
//	}
//	printf("%d ", n % 10);
//}
//print1(int n)
//{
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//}
//int main()
//{
//	//int n = 0;
//	////int m = 0;
//	//scanf("%d", &n);
//	//print_b(n);
//	int n = 0;
//	scanf("%d", &n);
//	print1(n);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; *(str + i) != '\0'; i++)
//	{
//		count++;
//	}
//	return count;
//}
//void reservestr(char arr[])
//{
//	int r = my_strlen(arr);
//	char i = arr[0];
//	arr[0] = arr[r -1];
//	arr[r - 1] = '\0';
//	if (r > 1)
//	{
//		
//		reservestr(arr + 1);
//	}
//	arr[r - 1] = i;
//}
//int main()
//{
//	char arr[10] = "123456789";
//	reservestr(arr);
//	int i = my_strlen(arr);
//	printf("%s\n", arr);
//	printf("%d", i);
//	return 0;
//}
////int sum(int n)
////{
////	if (n > 9)
////		return n % 10 + sum(n / 10);
////	else
////		return n;
////}
////int main()
////{
////	int n = 0;
//	scanf("%d", &n);
//	int i = sum(n);
//	printf("%d", i);
//	return 0;
//}
//int S(int n, int k)
//{
//	if (k > 0)
//		return n * S(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return (1/S(n, -k));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int count = S(n,k);
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//int my_strlen(char *str)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; *(str + i) != '\0'; i++)
//	{
//		count++;
//	}
//	return count;
//}
//void reservestr(char arr[])
//{
//	int r = my_strlen(arr);
//	// printf("%d\n", r);
//	char i = arr[0];
//	arr[0] = arr[r - 1];
//	arr[r - 1] = '\0';
//	if (r > 1)
//	{
//		reservestr(arr + 1);
//	}
//	arr[r - 1] = i;
//}
//int main()
//{
//	char arr[10] = "123456789";
//	reservestr(arr);
//	int i = my_strlen(arr);
//	printf("%s\n", arr);
//	printf("%d", i);
//	return 0;
//}
