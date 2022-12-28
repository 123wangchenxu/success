#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};//创建结构体
void CreateFile(struct Student *student, int);
void ReadOut(struct Student* student,int);
void Sort(struct Student* student, int);//构造函数
int main()
{
	int m;
	char a, b;
	int j = 0;
	int p = 0;
	struct Student student[40];//预留空间
	printf("请输入学生数：");
	scanf_s("%d", &m);
	getchar();
	int i = 0;
	for (i = 0; i < m; i++)
	{
		printf("请输入：");
		j = 0;
		p = 0;
		while (scanf_s("%c", &a))
		{
			student[i].ID[j] = a;
			if (a == ' ')
				break;
			j++;
		}
		student[i].ID[j] = '\0';
		while (scanf_s("%c", &b))
		{
			student[i].name[p] = b;
			if (b == ' ')
				break;
			p++;
		}
		student[i].name[p] = '\0';
		scanf_s("%d", &student[i].age);
		scanf_s("%lf", &student[i].score);
		getchar();
		
	}//循环输入结构体内容
	CreateFile(student, m);
	ReadOut(student, m);
	Sort(student, m);
	return 0;

}

void CreateFile(struct Student* student, int m)
{
	int i = 0;
	FILE* pc;
	int error = fopen_s(&pc, "D:\\Info.dat", "w+");
	for (i = 0; i < m; i++)
	{
		fwrite(student++, sizeof(struct Student), 1, pc);
	}
	fclose(pc);//读取结构体内容到文件（二进制）
}
void ReadOut(struct Student*student,int m)
{
	int i = 0;
	FILE* pc;
	int error = fopen_s(&pc, "D:\\Info.dat", "r+");
	struct Student* pi = (struct Student*)malloc(m * sizeof(struct Student));
	for (i = 0; i < m; i++)
	{
		fread(pi++, sizeof(struct Student), 1, pc);
		printf("%s %s %d %lf", pi[i].ID, pi[i].name, pi[i].age, pi[i].score);
	}
	fclose(pc);
}//读入内存，以二进制形式输出
void Sort(struct Student* student, int m)
{
	int i = 0;
	int j = 0;
	int q = m;
	int u = 0;
	struct Student pupil;
	for (i = 0; i < m-1; i++,q--)
	{
		for (j = 0; j < q - 1;  j++)
		{
			if (student[j].score < student[j + 1].score)
			{
				 pupil=student[j];
				 student[j] = student[j + 1];
				 student[j + 1] = pupil;
				
			}
		}
	}
	for (u = 0; u < m; u++)
	{
		printf("%s %s %d %lf\n", student[u].ID, student[u].name, student[u].age, student[u].score);
	}
}//按照成绩排序
//某班有学生若干名（不超过40名），其信息的组织采用如下的结构体定义。编写程序exp9_2.c，
//完成要求的功能。
/*struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};
① 从键盘读入该班级学生的信息。
② 将所有的学生信息存入D : \Info.dat文件中、关闭该文件，建立文件定义函数CreateFile实现。
③　另写一个函数ReadOut，将D : \Info.dat文件中的信息读入到内存，并依次输出到显示器上，该函数由main函数调用。
④编写函数Sort，实现按成绩由高到低将学生记录进行排序并输出排序后的结果。
⑤文件读写采用二进制读写（fread、fwrite）方式。实验解答：  
①请写出完整的源程序代码并做适当注释：*/


