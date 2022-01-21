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
	student stu[3] = { {"970101","四子一甲","王曉明",61,71,81},
					 {"970102","四子一甲","李鍾維",92,82,72},
					 {"970103","四子一甲","張大成",73,63,83} };
	student *ps;
	ps = &stu[0];
	printf("	    *****************\n");
	printf("	    *    學生成績   *\n");
	printf("	    *****************\n\n");
	printf("============================================\n");
	printf(" 學號	 班級	   姓名	    國文 英文 數學\n");
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
