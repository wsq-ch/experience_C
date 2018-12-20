/*
输出能被2整除的所有数
*/
# include <stdio.h>
int main (void)
{
	int i;

	for (i=1; i<100; ++i)
		if (i%2 == 0)                //i%2指i除以2之后的余数
			printf ("i = %d\n",i);
	
	return 0;
}

