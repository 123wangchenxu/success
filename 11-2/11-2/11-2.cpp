#include<stdio.h>
int main()
{
	char m,n;
	char mn[1000];
	int yang,tian,hu,zyang=0,ztian=0,zhu=0,zongbangshu,d=0;
	double zongjia,zaxiang,zhekouzhihou=0,feiyong;
	

	//11.ABC �ʹ��ӻ�����۵����ۼ�Ϊ 2.05 ��Ԫ / ��������ۼ�Ϊ 1.15
		//��Ԫ / �������ܲ��ۼ�Ϊ 1.09��Ԫ / ����������˷�֮ǰ��100��Ԫ�Ķ�����
		//5 % �Ĵ����Żݡ����ڻ����5���Ķ�����ȡ6.5��Ԫ���˷ѺͰ�װ�ѣ�5����
	//	20���Ķ�����ȡ14��Ԫ���˷ѺͰ�װ�ѣ�����20���Ķ�����14��Ԫ�Ļ�����
		//ÿ����1������0.5��Ԫ����дһ��������ѭ������switch���ʵ���û���
	//�벻ͬ����ĸʱ�в�ͬ����Ӧ��������a����Ӧ�����û������󼻵İ�����b
	//	����˵İ�����c�Ǻ��ܲ��İ�����q ���˳�����������Ҫ��¼�ۼƵ���
	//	������������û����� 4 ������ˣ�Ȼ������ 5������ˣ�����Ӧ����9��
		//����ˡ�Ȼ�󣬸ó���Ҫ��������ܼۡ��ۿۣ�����еĻ������˷ѺͰ�װ
		//�ѡ���󣬳���Ӧ��ʾ���еĹ�����Ϣ����Ʒ�ۼۡ���������������λ��
	//	�������������߲˷��á��������ܷ��á��ۿۣ�����еĻ������˷ѺͰ�װ
	//	�ѣ��Լ����еķ����ܶ
	while ((m = getchar()) != 'q')
	{
		switch (m)
		{
		case 'a':
			printf("�������󼻵İ�����");
			scanf_s("%d", &yang);
			zyang += yang;
			printf("��%d������", zyang);
			break;
		case 'b':
			printf("��������˵İ�����");
			scanf_s("%d", &tian);
			ztian += tian;
			printf("��%d�������", ztian);
			break;
		case 'c':
			printf("��������ܲ��İ�����");
			scanf_s("%d", &hu);
			zhu += hu;
			printf("��%d���ĺ��ܲ�", zhu);
			break;


		}
	}
	printf("�˳�����");
	zongbangshu = zhu + ztian + zyang;
	zongjia = zyang * 2.05 + ztian * 1.15 + zhu * 1.09;
	
	if (zongjia <= 5)
		zaxiang = 6.5;
	else if (zongjia > 5 && zongjia <= 20)
		zaxiang = 14;
	else
		zaxiang = 14 + (zongbangshu - 20) * 0.5;
	if (zongjia >= 100)
		zhekouzhihou = zongjia * 0.05;
	 
	feiyong = zongjia - zhekouzhihou + zaxiang;
	printf("��Ʒ�ۼۣ����ۼ�Ϊ2.05 ��Ԫ/��������ۼ� 1.15��Ԫ / �������ܲ��ۼ�Ϊ1.09��Ԫ / ����\n");
	printf("����������%d����λ����\n", zongbangshu);
	printf("�������߲˷��ã�%lf\n", zongjia);
	printf("�ۿۣ�%lf\n", zhekouzhihou);
	printf("�˷ѺͰ�װ�ѣ�%lf\n", zaxiang);
	printf("�����ܺͣ�%lf\n", feiyong);
	//6.��д�����ȡ���룬����#ֹͣ������ei���ֵĴ�����
		//ע��
		//�ó���Ҫ��¼ǰһ���ַ��͵�ǰ�ַ����á�Receive your eieio award����
		//�������������ԡ�
	int i = 1,j=0;
	while ((n = getchar()) != '#')
	{
		
		mn[i]=n;
			
			if (mn[i] == 'i' && mn[i - 1] == 'e')
				j++;
			i++;
			
		

		
	}
	printf("ei������%d��", j);



	

	return 0;
	
}