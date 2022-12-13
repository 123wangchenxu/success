#include<stdio.h>
int main()
{
	char m,n;
	char mn[1000];
	int yang,tian,hu,zyang=0,ztian=0,zhu=0,zongbangshu,d=0;
	double zongjia,zaxiang,zhekouzhihou=0,feiyong;
	

	//11.ABC 邮购杂货店出售的洋蓟售价为 2.05 美元 / 磅，甜菜售价为 1.15
		//美元 / 磅，胡萝卜售价为 1.09美元 / 磅。在添加运费之前，100美元的订单有
		//5 % 的打折优惠。少于或等于5磅的订单收取6.5美元的运费和包装费，5磅～
	//	20磅的订单收取14美元的运费和包装费，超过20磅的订单在14美元的基础上
		//每续重1磅增加0.5美元。编写一个程序，在循环中用switch语句实现用户输
	//入不同的字母时有不同的响应，即输入a的响应是让用户输入洋蓟的磅数，b
	//	是甜菜的磅数，c是胡萝卜的磅数，q 是退出订购。程序要记录累计的重
	//	量。即，如果用户输入 4 磅的甜菜，然后输入 5磅的甜菜，程序应报告9磅
		//的甜菜。然后，该程序要计算货物总价、折扣（如果有的话）、运费和包装
		//费。随后，程序应显示所有的购买信息：物品售价、订购的重量（单位：
	//	磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装
	//	费，以及所有的费用总额。
	while ((m = getchar()) != 'q')
	{
		switch (m)
		{
		case 'a':
			printf("请输入洋蓟的磅数：");
			scanf_s("%d", &yang);
			zyang += yang;
			printf("有%d磅的洋蓟", zyang);
			break;
		case 'b':
			printf("请输入甜菜的磅数：");
			scanf_s("%d", &tian);
			ztian += tian;
			printf("有%d磅的甜菜", ztian);
			break;
		case 'c':
			printf("请输入胡萝卜的磅数：");
			scanf_s("%d", &hu);
			zhu += hu;
			printf("有%d磅的胡萝卜", zhu);
			break;


		}
	}
	printf("退出订购");
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
	printf("物品售价：洋蓟售价为2.05 美元/磅，甜菜售价 1.15美元 / 磅，胡萝卜售价为1.09美元 / 磅。\n");
	printf("订购重量：%d（单位磅）\n", zongbangshu);
	printf("订购的蔬菜费用：%lf\n", zongjia);
	printf("折扣：%lf\n", zhekouzhihou);
	printf("运费和包装费：%lf\n", zaxiang);
	printf("费用总和：%lf\n", feiyong);
	//6.编写程序读取输入，读到#停止，报告ei出现的次数。
		//注意
		//该程序要记录前一个字符和当前字符。用“Receive your eieio award”这
		//样的输入来测试。
	int i = 1,j=0;
	while ((n = getchar()) != '#')
	{
		
		mn[i]=n;
			
			if (mn[i] == 'i' && mn[i - 1] == 'e')
				j++;
			i++;
			
		

		
	}
	printf("ei出现了%d次", j);



	

	return 0;
	
}