//求1+1/2+1/3+....+1/100的值
# include <stdio.h>
int main (void)
{
	float i;
	float sum=0;

	for (i=1; i<=1/100; i=1/(i+1))//当i<=1/100时，循环才继续，但当i=1时已经大于1/100
		sum=sum+i;
	printf ("sum=%f\n",sum);
	

	return 0;
}
/*在VC中输出为
---------------------
0.00000
---------------------
*/