#include <stdio.h>
#include <string.h> // �ṩstrlen()������ԭ��
#define DENSITY 62.4 // �����ܶȣ���λ����/����Ӣ�ߣ�
#define BOOK "War and Peace"
#define Q "His Hamlet was funny without being vulgar."
int main()
{
	float weight, volume;
	int size, letters;
	char name[40]; // name��һ��������40���ַ�������
	printf("Hi! What's your first name?\n");
	scanf_s("%s", name,40);
	printf("%s, what's your weight in pounds?\n", name);
	scanf_s("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
		volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n",
		name, volume);
	printf("Also, your first name has %d letters,\n",
		letters);
	printf("and we have %d bytes to store it.\n", size);
	printf("He sold the painting for $%2.2f.\n", 2.345e2);
	printf("%c%c%c\n", 'H', 105, '\41');
	printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
	printf("\"%s \"has % d""characters.\n", Q, strlen(Q));
	float cost = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\"sells for$%.2f\n"
		"That is %.f%% of list.",BOOK,cost,percent);
	unsigned int mi = 9;
	printf("%zd", mi);
	char mk[40];
	char ml[40];
	printf("���������������գ�");
	scanf_s("%s%s", mk, 40, ml, 40);
	printf("%s  %s", mk, ml);
	float mg,mh;
	printf("%c", 'a');
	
	scanf_s("%f%e", &mg,&mh);
	printf("%f%.6e", mg, mh);

	
		int x, y, z;
		int p = 123456;  //����
		x = 20181011; //ԭʼ����
		printf("ԭʼ�����֣�%d\n", x);
		y = x ^ p;
		printf("���ܺ�����֣�%d\n", y);
		z = y ^ p;
		printf("���ܺ�����֣�%d\n", z);

	

	
	
	
    return 0;
}
