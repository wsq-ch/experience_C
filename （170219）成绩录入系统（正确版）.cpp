# include <stdio.h>
int main (void)
{
	float i;
	
	printf ("请输入你的考试成绩：");
	scanf ("%f", &i);
	if (i>100)
		printf ("你在做梦？\n");
	else if (i >= 80 && i <= 100)
		printf ("你很优秀，继续努力！\n");
	else if (i >= 60 && i <= 80)
		printf ("你及格了，仅仅是及格\n");
	else if (i < 60)
	    printf ("重修吧，骚年\n"); 

    return 0;
}