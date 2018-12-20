//求1+1/2+1/3+....+1/100的值
# include <stdio.h>
int main (void)
{
	int i;
	float sum=0;

	for (i=1; i<=100; i=++i)
		sum=sum+1/(float)(i);    //(float)(i)表示把i的数据类型强制变换为float
	printf ("sum=%f\n",sum);
	

	return 0;
}
/*在VC中输出为
---------------------
sum=5.187378
---------------------
*/