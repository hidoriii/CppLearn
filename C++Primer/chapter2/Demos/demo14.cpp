#include<iostream>
using namespace std;

// 1. ָ��ָ���ָ�루�༶ָ�룩

// 2. ָ��ָ�������

int main14()
{
	//1.ָ��ָ���ָ�루�༶ָ�룩
	int ival = 1024;
	int* pi = &ival; // piָ��һ��int�͵���
	int** ppi = &pi; // ppiָ��һ��int�͵�ָ��
	// ��ʱ��������ָ��ָ���ָ���õ�һ��ָ�롣
	// ��Ҫ���ʵ���ԭʼ���Ǹ�������Ҫ��ָ���ָ�������ν����ã�
	cout << "The value of ival\n"
		<< "direct value: " << ival << "\n"
		<< "indirect value: " << *pi << "\n"
		<< "doubly indirect value: " << **ppi
		<< endl;


	//2.ָ��ָ�������
	int i = 42;
	int* p; // p��һ��int��ָ��
	int*& r = p; // r��һ����ָ��p������

	r = &i; // r������һ��ָ�룬��˸�r��ֵ&i������pָ��i
	*r = 0; // ������r�õ�i��Ҳ����pָ��Ķ��󣬽�i��ֵ��Ϊ0
	cout << "i = " << i << endl;


	system("pause");
	return 0;
}
