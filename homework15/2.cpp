//#include <stdio.h>
//#include<stdlib.h>
////1.一个数组中只有一个数字是出现一次， 其他所有数字都出现了两次。找出这个只出现一次的数字，编程实现。
//void findnum(int * src, int n, int * pnum1, int * pnum2)
//{
//	int i;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum ^= src[i];//先将所有元素异或，留下的是不相同的两个字符串异或后的结果
//	}
//
//	int pos;
//
//	for (pos = 0; !(sum & 1 << pos); pos++);//判断从最低位开始哪一位是1，也就是不同的两个数最先从哪一位开始不同
//
//
//	int num1 = 0, num2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (src[i] & 1 << pos)//将元素按照第pos位是0还是1分组，分别异或。
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