/*
20170310
你是Gay吗？
*/
# include <stdio.h>
int main (void)
{
	char H;
	do
	{
		printf ("请问你是Gay吗?\n");
		printf ("A不是,B是\n");
		scanf (" %c",&H);        //此处%前应有一个空格，具体不明
	}while ('A'==H || 'a'==H);
	
	return 0;
}