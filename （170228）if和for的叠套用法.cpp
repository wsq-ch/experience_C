/*
����ܱ�2������������
*/
# include <stdio.h>
int main (void)
{
	int i;

	for (i=1; i<100; ++i)
		if (i%2 == 0)                //i%2ָi����2֮�������
			printf ("i = %d\n",i);
	
	return 0;
}

