#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 1000; i++)
	{
		printf("请输入哥哥我爱你\n");
		scanf("%s", password);
		if (strcmp(password, "哥哥我爱你") == 0)
		{
			system("cls");
			Sleep(2000);
			printf("哥哥更爱你！\n");
				Sleep(2000);
				system("cls");
				printf("\n我偏爱的老婆！\n");
				Sleep(2000);
				system("cls");
				Sleep(2000);
				printf("\n情人节快乐!\n");
				Sleep(2000);
				break;
		}
	}
}
//int main()
//{
//	char ch[20] = { 0 };
//	printf("请输入哥哥我爱你！");
//	scanf("%s", &ch);
//	do
//	{
//		printf("请输入哥哥我爱你！");
//	} 
//	while (strcmp(ch, "哥哥我爱你！") != 0);//比较字符串
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码？>");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0)//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	//welcome to bit!!!!!!
//	//####################
//	//w##################!
//	//we################!!
//	//...
//	//welcome to bit!!!!!!
//	//char arr[]="abc"
//	//[a b c \0]
//	//0 1 2 3
//	//4-2
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right=sizeof(arr1)/sizeof(arr1[0])-2;//err
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);//调用库函数windows
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕-库函数stdlib
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 22;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计量元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i= 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//		ret = 1;//很重要
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#include<stdio.h>//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//k=0是赋值，k==0为假，不循环
//		k++;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}