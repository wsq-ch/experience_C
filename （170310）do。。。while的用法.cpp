/*
20170310
����Gay��
*/
# include <stdio.h>
int main (void)
{
	char H;
	do
	{
		printf ("��������Gay��?\n");
		printf ("A����,B��\n");
		scanf (" %c",&H);        //�˴�%ǰӦ��һ���ո񣬾��岻��
	}while ('A'==H || 'a'==H);
	
	return 0;
}