//#include <stdio.h>
//#include<stdlib.h>
////1.һ��������ֻ��һ�������ǳ���һ�Σ� �����������ֶ����������Ρ��ҳ����ֻ����һ�ε����֣����ʵ�֡�
//void findnum(int * src, int n, int * pnum1, int * pnum2)
//{
//	int i;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum ^= src[i];//�Ƚ�����Ԫ��������µ��ǲ���ͬ�������ַ�������Ľ��
//	}
//
//	int pos;
//
//	for (pos = 0; !(sum & 1 << pos); pos++);//�жϴ����λ��ʼ��һλ��1��Ҳ���ǲ�ͬ�����������ȴ���һλ��ʼ��ͬ
//
//
//	int num1 = 0, num2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (src[i] & 1 << pos)//��Ԫ�ذ��յ�posλ��0����1���飬�ֱ����
//		{
//			num1 ^= src[i];
//		}
//		else
//		{
//			num2 ^= src[i];
//		}
//	}
//	*pnum1 = num1;
//	*pnum2 = num2;
//}
//
//int main()
//{
//	int arr[] = {1,1,2,2,3,3,4,5};
//	int num1, num2;
//	findnum(arr, sizeof(arr) / sizeof(arr[0]), &num1, &num2);
//	printf("%d %d\n", num1, num2);
//	system("pause");
//	return 0;
//}