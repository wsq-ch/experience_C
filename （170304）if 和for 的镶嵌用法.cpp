/*
20170304
����ż���ĺ͡������Լ�ƽ��ֵ
*/

# include <stdio.h>
int main (void)
{
	int i;
	int sum1=0;		//������
	int sum2=0;		//ż����
	float avg1=0;	//����ƽ��ֵ
	float avg2=0;	//ż��ƽ��ֵ
	int cnt1=0;		//��������
	int cnt2=0;		//ż������
	
	for (i=1; i<=100; ++i)
		if (i%2==1)
		{
			sum1=sum1+i;
			++cnt1;
		}
		else if (i%2==0)
		{
			sum2=sum2+i;
			++cnt2;
		}
		avg1=(float) sum1/cnt1;
		avg2=(float) sum2/cnt2;

		printf ("������Ϊ%d\n",sum1);
		printf ("ż����Ϊ%d\n",sum2);
		printf ("��������Ϊ%d\n",cnt1);
		printf ("ż������Ϊ%d\n",cnt2);
		printf ("����ƽ��ֵΪ%f\n",avg1);
		printf ("ż��ƽ��ֵΪ%f\n",avg2);
		
		return 0;
}
/*
��VC�����Ϊ
---------------------
������Ϊ2500
ż����Ϊ2550
��������Ϊ50
ż������Ϊ50
����ƽ��ֵΪ50.000000
ż��ƽ��ֵΪ51.000000
---------------------
*/