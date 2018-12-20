# include <stdio.h>
int main (void)
{
	if (3 > 2)        
		printf ("haha\n");
	else if (4 > 2)            //else if 表示此外如果，if 后面的条件语句即使成立，当第一句成立时，仍只执行第一语句
		printf ("heihei\n");
	else 
		printf ("no\n");
  
	return 0;
}

/*
在VC中输出为
---------------------
haha
---------------------
*/