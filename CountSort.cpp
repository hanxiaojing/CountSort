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
//	//�ҳ����е����ֵ����Сֵ������max-min+1���ռ��С��count����
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
//	memset(count, 0, (max - min + 1) * sizeof(int));//�������ʼ��
//	/*��Ҫ���������a���и���ͳ�ƣ�a�����Ԫ��i�ͷ���count�����i-min����
//	������i������Ϊ��������Ϊ1000  2000 3000�����ٵ�count���±�0��ʼ���ͽ�1000����count��1000-1000=0��*/
//	for (int i = 0; i < a.size(); i++)
//	{
//		count[a[i]-min]++;
//	}
//	//��count��������ȥ�ã�i+min����ԭ�±�
//	int j = 0;
//	for (int i = 0; i < max - min + 1; i++)
//	{
//		while (count[i]>0)//��ʱ�����ظ�n�Σ��Ǿͽ������û�ȥn��
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