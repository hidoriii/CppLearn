#include<iostream>
using namespace std;

int main17()
{
	const int v2 = 0;
	int v1 = v2;
	int* p1 = &v1, & r1 = v1;
	const int* p2 = &v2, * const p3 = &v1, & r2 = v2;


	r1 = v2;

	//p1 = p2; // ����p2�����ײ�const�Ķ��壬��p1û��
	p2 = p1; // ��ȷ��p1������const���ƣ���p2Ҳ�еײ�const�����Լ�ʹp1�����ײ�const��Ҳ����ȷ�ġ�

	//p1 = p3; // ����ԭ��ͬ��
	p2 = p3; // ��ȷ�����߶������ײ�const

	system("pause");
	return 0;
}
