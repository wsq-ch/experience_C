/*
20170314
�˻�����С����
*/
# include <stdio.h>
int main (void)
{
	int i;
	char ch;
	
	do
	{
		printf ("��������Ҫ����¥�㣺 \n");
		scanf ("%d",&i);
		
		switch (i)
		{
		case 1:										//��ڣ�������Ĵ�������ʱ�Ӹ���ڽ�
			printf ("һ�㿪��\n");                 
			break;                                  //���ڣ������ִ�����ʱ��breakִֹͣ��
		case 2:
			printf ("���㿪��\n");
			break;
		case 3:
			printf ("���㿪��\n");
			break;
		default:
			printf ("û�иǵ���һ�㣡\n");
			break;
		}
		printf ("����Ҫ������˵�����\n");
		printf ("Ҫ��Y������Ҫ��N��\n");
		scanf (" %c",&ch);						//c֮ǰҪ���ո�
	}while ('Y'==ch || 'y'==ch);				//��ķ�����||
	
	return 0;
}