////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int money = 20;
//	int sum = money;
//	int temp = 20;
//	int yushu = 0;
//	int i = 0;
//	int arr[10] = { 0 };//��¼ÿһ�ֲ��ܻ���ƿ����
//	while (1)
//	{
//		++i;
//		temp = temp / 2;//10,5,2,1
//		yushu = temp % 2;//0,0,1,0
//		arr[i] = yushu;
//		sum = temp + sum;//30,35,37,38,39
//		if (1 == temp)//�����һ�λ�ƿ�ӵ����жϣ���Ϊ��Ҫ����ǰ����ʣ��ƿ�ӵ�����
//		{
//			yushu = 0;
//			for (i = 0; i < 10; ++i)
//			{
//				yushu += arr[i];//ͳ�����еĲ��ܻ���ƿ��
//            }
//			yushu %= 10;
//			temp = (temp + yushu) / 2;//ȥ��ƿ��
//            sum = sum + temp;//�����ܻ�����ƿ����
//			break;
//		}
//		
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}