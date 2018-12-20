//for与while的用法
# include <stdio.h>
int main (void)
{

	int i;
	int sum1=0;
	
	for (i=1; i<=100; ++i)
		sum1 = sum1 +i;
	printf ("一加到一百的值为%d\n",sum1);		//此为for的用法



	int j=1;
	int sum2=0;
	while (j<=100)
	{
		sum2 = sum2 +j;
		++j;
	}
	printf ("一加到一百的值为%d\n",sum2);		//此为while的用法


	
	return 0;
}
/*
在VC中输出为
---------------------
一加到一百的值为5050
一加到一百的值为5050
---------------------
总结：
虽然输出结果一样，但是for会更简洁
*/