#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10 /* ����鼮���� */
char* s_gets(char* st, int n);
struct book { /* ���� book ģ�� */
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
	char tf = 'F';
};
int main(void)
{
	char ai;
	struct book library[MAXBKS]; /* �ṹ���� */
	int count = 0;
	int index, filecount;
	FILE* pbooks;
	int size = sizeof(struct book);
	int error;
	if (( error=fopen_s(&pbooks,"book.dat", "a+b")) !=0)
	{
		fputs("Can't open book.dat file\n", stderr);
		exit(1);
	}
	rewind(pbooks); /* ��λ���ļ���ʼ */
	while (count < MAXBKS && fread(&library[count], size,
		1, pbooks) == 1)
	{
		if (count == 0)
			puts("Current contents of book.dat:");
		printf("%s by %s: $%.2f\n", library[count].title,
			library[count].author, library[count].value);
		count++;
	}
	filecount = count;
	if (count == MAXBKS)
	{
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}
	puts("Please add new book titles.");
	puts("Press [enter] at the start of a line to stop.");
		while (count < MAXBKS && s_gets(library[count].title, MAXTITL) !=
			NULL
			&& library[count].title[0] != '\0')
		{
			puts("Now enter the author.");
			s_gets(library[count].author, MAXAUTL);
			library[count].tf = 'T';
			puts("Now enter the value.");
			scanf_s("%f", &library[count++].value);
			
			while (getchar() != '\n')
				continue; /* ���������� */
			if (count < MAXBKS)
				puts("Enter the next title.");
		}
	if (count > 0)
	{
		puts("Here is the list of your books:");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title,
				library[index].author, library[index].value);
			fwrite(&library[filecount], size, count - filecount,
				pbooks);
	}
	else
		puts("No books? Too bad.\n");
	puts("Bye.\n");
	fclose(pbooks);
	char bi[40];
	FILE* pci;
	int error1 = fopen_s(&pci, "book.dat", "r+b");
	int i = 0;
	int j = 0;
	int ci = 0;
	int di = 0;
	char qi, qii;
	while (1)
	{
		printf("***************�˵�**************\n");
		printf("a)ɾ����¼\n");
		printf("b)�޸ļ�¼\n");
		printf("c)ȫ����¼\n");
		printf("d)д���ļ�\n");
		scanf_s("%c", &ai);
		getchar();
		switch (ai)
		{
		case 'a':
			printf("������Ҫɾ������Ŀ��");
			while (scanf_s("%c", &qi))
			{
				bi[ci] = qi;
				if (qi == '\n')
					break;
				ci++;
			}
			bi[ci]='\0';
			for (i = 0; i < 10; i++)
			{
				if (!strcmp(library[i].title, bi))
					library[i].tf = 'F';
			}
			break;
		case 'b':
			printf("������Ҫ�޸ĵ���Ŀ��");
			while (scanf_s("%c", &qi))
			{
				bi[ci] = qi;
				if (qi == '\n')
					break;
				ci++;
			}
			bi[ci] = '\0';
			for (i = 0; i < 10; i++)
			{
				if (!strcmp(library[i].title, bi))
				{
					printf("������Ҫ�޸ĵ����ݣ�\n");
					printf("1)����\n2)������\n3)�۸�\n");
					scanf_s("%d", &j);
					getchar();
					switch (j)
					{
					case 1:
						scanf_s("%s", library[i].title, 40);
						getchar();
						break;
					case 2:
						scanf_s("%s", library[i].author, 40);
						getchar();
						break;
					case 3:
						scanf_s("%f", library[i].value);
						getchar();
						break;
					default:
						break;
					}
				}
			}
		case 'c':
			for (i = 0; i < 10; i++)
			{
				if (library[i].tf == 'T')
					printf("%s %s %f", library[i].title, library[i].author, library[i].value);

			}
			break;
		case 'd':
			for (i = 0; i < 10; i++)
			{
				if (library[i].tf == 'T')
				{
					fwrite(library+i, sizeof(struct book), 1, pci);
					
				}


			}
			break;
		default:
			break;
		}
		if (ai < 97 || ai>100)
			break;
	}


	return 0;
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n'); // ���һ��з�
		if (find) // �����ַ���� NULL��
			*find = '\0'; // �ڴ˴�����һ�����ַ�
		else
			while (getchar() != '\n')
				continue; // ����������
	}
	return ret_val;
}

/*7.�޸ĳ����嵥 14.14�����ļ��ж�ȡÿ����¼����ʾ�����������û�
ɾ����¼���޸ļ�¼�����ݡ����ɾ����¼���ѿճ����Ŀռ�������һ��Ҫ
����ļ�¼��Ҫ�޸����е��ļ����ݣ�������"r+b"ģʽ��������"a+b"ģ
ʽ�����ң��������ע�ⶨλ�ļ�ָ�룬��ֹ�¼���ļ�¼�������м�¼��
��򵥵ķ����ǸĶ��������ڴ��е��������ݣ�Ȼ���ٰ�������Ϣд����
�������ٵ�һ����������book�ṹ�����һ����Ա��ʾ�Ƿ���ɾ����*/