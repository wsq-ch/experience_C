# include <stdio.h>
int main (void)
{
	float i;
	
	printf ("��������Ŀ��Գɼ���");
	scanf ("%f", &i);
	if (i>100)
		printf ("�������Σ�\n");
	else if (i >= 80 && i <= 100)
		printf ("������㣬����Ŭ����\n");
	else if (i >= 60 && i <= 80)
		printf ("�㼰���ˣ������Ǽ���\n");
	else if (i < 60)
	    printf ("���ްɣ�ɧ��\n"); 

    return 0;
}