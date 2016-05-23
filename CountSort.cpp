//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//#include<assert.h>
//#include<vector>
//
//void Print(vector<int>  a)
//{
//	for (int i = 0; i < a.size(); i++)
//	{
//		cout << a[i] << "  ";
//	}
//	cout << endl;
//}
//
//
//void CountSort(vector<int>& a)
//{
//	int max = a[0];
//	int min = a[0];
//	//找出序列的最大值与最小值，开辟max-min+1个空间大小的count数组
//	for (int i = 1; i < a.size(); i++)
//	{
//		if (max<a[i])
//			max = a[i];
//		if (min>a[i])
//			min = a[i];
//	}
//	int* count = new int[max - min + 1];
//	//for (int i = 0; i < max - min + 1; i++)
//	//	count[i] = 0;
//	memset(count, 0, (max - min + 1) * sizeof(int));//将数组初始化
//	/*对要排序的数组a进行个数统计，a数组的元素i就放在count数组的i-min处，
//	而不是i处。因为：若序列为1000  2000 3000，开辟的count从下标0开始，就将1000放于count的1000-1000=0处*/
//	for (int i = 0; i < a.size(); i++)
//	{
//		count[a[i]-min]++;
//	}
//	//将count数组往回去拿，i+min代表还原下标
//	int j = 0;
//	for (int i = 0; i < max - min + 1; i++)
//	{
//		while (count[i]>0)//此时该数重复n次，那就将该数拿回去n次
//		{
//			a[j++] = i + min;
//			count[i]--;
//		}
//		
//	}
//	
//}
//
//
//void TestCountSort()
//{
//	vector<int> a = { 12, 34, 12222, 4568, 26, 1, 16, 10, 2, 4, 4, 93, 7, 5, 2, 4 };
//	CountSort(a);
//	Print(a);
//	
//}
//
//
//int main()
//{
//	TestCountSort();
//	system("pause");
//	return 0;
//}