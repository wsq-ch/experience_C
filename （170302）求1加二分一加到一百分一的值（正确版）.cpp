//��1+1/2+1/3+....+1/100��ֵ
# include <stdio.h>
int main (void)
{
	int i;
	float sum=0;

	for (i=1; i<=100; i=++i)
		sum=sum+1/(float)(i);    //(float)(i)��ʾ��i����������ǿ�Ʊ任Ϊfloat
	printf ("sum=%f\n",sum);
	

	return 0;
}
/*��VC�����Ϊ
---------------------
sum=5.187378
---------------------
*/