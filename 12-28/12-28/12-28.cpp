#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};//�����ṹ��
void CreateFile(struct Student *student, int);
void ReadOut(struct Student* student,int);
void Sort(struct Student* student, int);//���캯��
int main()
{
	int m;
	char a, b;
	int j = 0;
	int p = 0;
	struct Student student[40];//Ԥ���ռ�
	printf("������ѧ������");
	scanf_s("%d", &m);
	getchar();
	int i = 0;
	for (i = 0; i < m; i++)
	{
		printf("�����룺");
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
		
	}//ѭ������ṹ������
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
	fclose(pc);//��ȡ�ṹ�����ݵ��ļ��������ƣ�
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
}//�����ڴ棬�Զ�������ʽ���
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
}//���ճɼ�����
//ĳ����ѧ����������������40����������Ϣ����֯�������µĽṹ�嶨�塣��д����exp9_2.c��
//���Ҫ��Ĺ��ܡ�
/*struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};
�� �Ӽ��̶���ð༶ѧ������Ϣ��
�� �����е�ѧ����Ϣ����D : \Info.dat�ļ��С��رո��ļ��������ļ����庯��CreateFileʵ�֡�
�ۡ���дһ������ReadOut����D : \Info.dat�ļ��е���Ϣ���뵽�ڴ棬�������������ʾ���ϣ��ú�����main�������á�
�ܱ�д����Sort��ʵ�ְ��ɼ��ɸߵ��ͽ�ѧ����¼����������������Ľ����
���ļ���д���ö����ƶ�д��fread��fwrite����ʽ��ʵ����  
����д��������Դ������벢���ʵ�ע�ͣ�*/


