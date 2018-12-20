/*
20170316
break的用法
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
		break;					//break只能终止离它最近的for循环，且在for循环中语句按顺序执行
		printf ("哈哈！\n");	//不执行
		}




	for (a=1;a<3;++a)
	{
		if (3>2)
			printf ("嘻嘻！\n");	//执行
		break;						//break不能和if合用，除非if是循环内的语句，此时break终止for
	}



		
		

		switch (x)
		{
		case 0:
			switch (y)
			{
			case 1:
				printf ("嘿嘿！\n");	//执行
				break;					//break用于终止最近的switch，没有break的话，语句将依次执行
			case 2:
				printf ("2333\n");		//不执行
				break;
			}
			case 1:
				printf ("呵呵！\n");	//执行
				break;
		}
		return 0;
}
/*
在VC中输出为
---------------------
嘻嘻！
嘿嘿！
呵呵！
Press any key to continue
---------------------
*/
