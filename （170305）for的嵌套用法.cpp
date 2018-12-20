/*当前一个for中条件成立时，执行第二个for循环
  第一个for执行2次，第二个for执行2次
  总共执行4次
*/
# include <stdio.h>
int main (void)
{
	int i;
	int j;
	
	for (i=1; i<3; ++i)
		for (j=2; j<4; ++j)			
			printf ("嘻嘻\n");
	printf ("哈哈\n"); 
		
	return 0;
}
/*
在VC中输出为
---------------------
嘻嘻
嘻嘻
嘻嘻
嘻嘻
哈哈
---------------------
*/