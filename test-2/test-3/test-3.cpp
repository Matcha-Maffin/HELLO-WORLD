
#include <stdio.h>
//第11行不能调到第9行的位置，不然c就直接输出了
int main()
{
	int a=0;
	int b=0;
	int c=0;
	
	scanf_s("%d %d", &a, &b);
	c = a + b;
	printf("c=%d\n", c);

	return 0;
}