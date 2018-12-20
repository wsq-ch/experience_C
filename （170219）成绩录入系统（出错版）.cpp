# include <stdio.h>
# include <math.h>
int main (void)
{
	int i;                                     //此处应用float，因为输入成绩可能带小数点

	printf ("请输入你的成绩："); 
	scanf ("%d",&i);

	if (80 >= i >= 60 )                         /*不能直接用80>=i>=60，这样会导致80>=i先被判断，判断结果为0或1，恒>=60
												所以此语句恒成立，应用60<=i && i<=80
												*/
												
	    printf ("你及格了，仅仅是及格\n");
	if (100 >= i >= 81)
		printf ("考得不错\n");
	if (59 >= i >= 0)
		printf ("重修吧。骚年\n");


	return 0;
}