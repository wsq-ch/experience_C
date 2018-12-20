/*
20170207
使八进制数变成十六进制数
*/
# include <stdio.h>

int main (void)
{
	int i;    //输入i

	printf ("请输入一个八进制数\n");   
	scanf ("%o",&i);            //使用户输入一个八进制数，注意：括号内是"%o",&i,而不是"i = %o,&i"，这样赋不了值
	printf ("i = %#X\n",i);      //将数改为16进制数

	return 0;
}
