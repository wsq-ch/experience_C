/*
20170316
break���÷�
*/
# include <stdio.h>
int main (void)
{
	int i,j;
	int x=0;
	int	y=1;
	int a;
	for (i=0;i<3;++i)
		for (j=1;j<4;++j)
		{	
		break;					//breakֻ����ֹ���������forѭ��������forѭ������䰴˳��ִ��
		printf ("������\n");	//��ִ��
		}




	for (a=1;a<3;++a)
	{
		if (3>2)
			printf ("������\n");	//ִ��
		break;						//break���ܺ�if���ã�����if��ѭ���ڵ���䣬��ʱbreak��ֹfor
	}



		
		

		switch (x)
		{
		case 0:
			switch (y)
			{
			case 1:
				printf ("�ٺ٣�\n");	//ִ��
				break;					//break������ֹ�����switch��û��break�Ļ�����佫����ִ��
			case 2:
				printf ("2333\n");		//��ִ��
				break;
			}
			case 1:
				printf ("�Ǻǣ�\n");	//ִ��
				break;
		}
		return 0;
}
/*
��VC�����Ϊ
---------------------
������
�ٺ٣�
�Ǻǣ�
Press any key to continue
---------------------
*/
