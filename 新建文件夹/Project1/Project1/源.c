#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void test_(int* i)
{
	(*i)--;

}

void test(int* p)
{
	test_(p);


}
int main()
{
	int i = 5;
	test(&i);
	printf("%d", i);

}