/*
20170314
人机交互小电梯
*/
# include <stdio.h>
int main (void)
{
	int i;
	char ch;
	
	do
	{
		printf ("请输入你要到的楼层： \n");
		scanf ("%d",&i);
		
		switch (i)
		{
		case 1:										//入口，当输入的词语满足时从该入口进
			printf ("一层开！\n");                 
			break;                                  //出口，当语句执行完毕时，break停止执行
		case 2:
			printf ("二层开！\n");
			break;
		case 3:
			printf ("三层开！\n");
			break;
		default:
			printf ("没有盖到这一层！\n");
			break;
		}
		printf ("请问要继续搭乘电梯吗？\n");
		printf ("要（Y），不要（N）\n");
		scanf (" %c",&ch);						//c之前要留空格
	}while ('Y'==ch || 'y'==ch);				//或的符号是||
	
	return 0;
}