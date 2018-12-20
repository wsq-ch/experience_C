/*
20170304
求奇偶数的和、个数以及平均值
*/

# include <stdio.h>
int main (void)
{
	int i;
	int sum1=0;		//奇数和
	int sum2=0;		//偶数和
	float avg1=0;	//奇数平均值
	float avg2=0;	//偶数平均值
	int cnt1=0;		//奇数个数
	int cnt2=0;		//偶数个数
	
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

		printf ("奇数和为%d\n",sum1);
		printf ("偶数和为%d\n",sum2);
		printf ("奇数个数为%d\n",cnt1);
		printf ("偶数个数为%d\n",cnt2);
		printf ("奇数平均值为%f\n",avg1);
		printf ("偶数平均值为%f\n",avg2);
		
		return 0;
}
/*
在VC中输出为
---------------------
奇数和为2500
偶数和为2550
奇数个数为50
偶数个数为50
奇数平均值为50.000000
偶数平均值为51.000000
---------------------
*/