#include<stdio.h>
#include<ctype.h>
#define zifu 999
#include<math.h>
int duqu(int);
int main()
{
	int q = 0;
	int a[20][30] = { 0 };
	char b[20][31];
	int i = 0, j = 0;
	int m = 0, n = 0;
	int v = 0, f = 0;
	FILE* pc;
	FILE* pb;
	int error1 = fopen_s(&pc, "input.c", "r+");
	int error2= fopen_s(&pb, "inputs.c", "w+");
	if (error1!=0 || pc == NULL)
	{
		printf("�ļ���������");
		return 1;
	}
	while ((q=fgetc(pc))!=EOF)
	{
		if (!isspace(q))

		{
			a[i][j] = q;
			j++;
			if (j == 30)
			{
				i++;
				j = 0;
			}
			if (i == 20)
				break;
		}
		else
			continue;
	}
	for (v = 0; v < 20; v++)
	{
		for (f = 0; f < 30; f++)
		{
		if ((v >= 1 && v <= 18) && (f <= 28 && f >= 1))
		{
			if (fabs(a[v][f] - a[v][f - 1]) > 1 && fabs(a[v][f] - a[v][f + 1]) > 1 && fabs(a[v][f] - a[v + 1][f]) > 1 && fabs(a[v - 1][f] - a[v][f]) > 1)
			{
				a[v][f] = (a[v - 1][f] + a[v + 1][f] + a[v][f - 1] + a[v][f + 1]) - 192;
				if (a[v][f] % 4 > 1)
					a[v][f] = a[v][f] / 4 + 49;
				else
					a[v][f] = a[v][f] / 4 + 48;
			}
		}
	       a[v][f] = duqu(a[v][f]);
		}
	}
	for (n = 0; n < 20; n++)
	{
		for (m = 0; m < 30; m++)
		{
			b[n][m] = a[n][m];
		}
		b[n][m] = '\0';
		printf("%s\n", b[n]);
		fputs(b[n], pb);
		fputc('\n', pb);
	}
	
	fclose(pc);
	fclose(pb);
	return 0;
}
int duqu(int m)
{
	switch (m)
	{
	case '0':
		m = ' ';
		break;
	case '1':
		m = '.';
		break;
	case '2':
	m = '\'';
	break;
	case '3':
	m = ':'; 
	break;
	case '4':
	m = '~'; 
	break;
	case '5':
	m = '*';
	break;
	case'6':
	m = '='; 
	break;
	case '7':
	m = '$'; 
	break;
	case '8':
	m = '%';
	break;
	case '9':
	m = '#';
	break;
	}
	return m;
}

//Ϊ�����ϰ12�������ʧ��ĺ������ú�����ÿ��ֵ����������������
//��ֵ���Ƚϣ������ֵ������Χ����ֵ�Ĳ����1��������������ֵ��ƽ
//��ֵ����������Ϊ�����������ֵ��ע�⣬��߽��ϵĵ����ڵĵ�����4
//�������������⴦��
