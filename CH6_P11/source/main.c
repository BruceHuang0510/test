#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	typedef struct _student
	{
		char num[7];
		char clas[20];
		char name[20];
		int score[3];
	}student;
	student stu[3] = { {"970101","�|�l�@��","�����",61,71,81},
					 {"970102","�|�l�@��","�����",92,82,72},
					 {"970103","�|�l�@��","�i�j��",73,63,83} };
	student *ps;
	ps = &stu[0];
	printf("	    *****************\n");
	printf("	    *    �ǥͦ��Z   *\n");
	printf("	    *****************\n\n");
	printf("============================================\n");
	printf(" �Ǹ�	 �Z��	   �m�W	    ��� �^�� �ƾ�\n");
	printf("============================================\n");
	for (i = 0; i <= 2; i++)
	{
		printf("%6s %-10s %-8s  %4d %4d %4d\n", (ps + i)->num, (ps + i)->clas,
			(ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
