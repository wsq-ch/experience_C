/*
20170317
switch内嵌套if，if内嵌套while
*/
# include <stdio.h>
int main (void)
{
	int i;
	int m;
	int j=0;
	printf ("请输入你要打开的楼层：\n");
	scanf ("%d",&m);
	switch (m)
	{
	case 1:
		printf ("一层开！\n");
		break;
	case 2:
		printf ("二层开！\n");
		break;
	default :
		for (i=0;i<=5;++i)
		{
		//	j=0；				//正确写法
			while (j<=5)
			{
				printf ("电梯故障！\n");
				++j;
			}
		}
	}
	return 0;
}
/*
在VC中输出为
---------------------
请输入你要打开的楼层：
3
电梯故障！
电梯故障！
电梯故障！
电梯故障！
电梯故障！
电梯故障！
Press any key to continue
---------------------
原因
---------------------
j在一开始就被定义，导致在for循环中j的值最后变成5,j变成5之后内部不再循环，导致电梯故障只输出6次
---------------------
解决办法
---------------------
在for内，while前面定义j=0，此时每次for循环j都被重新定义一次，这样就能循环30次
---------------------
*/