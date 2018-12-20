/*
20170228
求1到10000的奇数和
*/
# include <stdio.h>
int main (void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10000; i += 2)
		sum = sum + i;
	printf ("sum = %d\n",sum);

	return 0;
}
