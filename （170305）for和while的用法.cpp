//for��while���÷�
# include <stdio.h>
int main (void)
{

	int i;
	int sum1=0;
	
	for (i=1; i<=100; ++i)
		sum1 = sum1 +i;
	printf ("һ�ӵ�һ�ٵ�ֵΪ%d\n",sum1);		//��Ϊfor���÷�



	int j=1;
	int sum2=0;
	while (j<=100)
	{
		sum2 = sum2 +j;
		++j;
	}
	printf ("һ�ӵ�һ�ٵ�ֵΪ%d\n",sum2);		//��Ϊwhile���÷�


	
	return 0;
}
/*
��VC�����Ϊ
---------------------
һ�ӵ�һ�ٵ�ֵΪ5050
һ�ӵ�һ�ٵ�ֵΪ5050
---------------------
�ܽ᣺
��Ȼ������һ��������for������
*/