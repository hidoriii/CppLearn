#include<iostream>
using namespace std;
#include<string>

/*
���������ͣ�signed
int, short, long, long long��C++11���¶����һ���������ͣ����Ǵ����ŵġ�ǰ��Ĭ����signed���� 

�޷������ͣ�unsigned
��int������ǰ�����unsigned���η��󣬸��������;ͱ���޷������͡�����unsigned long��
����unsigned int �е� int ����ʡ�Բ�д��

char���ͱȽ����⣬������Ϊ��3�֣�char��signed char �� unsigned char��
��Ҫע����ǣ�char���ͺ�signed char ����һ����
�����ַ�����3�֣������ַ��ı��ֵ���ʽֻ��2�֣������ŵĺͲ������ŵġ�
����charʵ���ϻ����Ϊ����������ʽ�е�һ�֣������������ɱ�����������
*/

int main1()
{
	//signed�ķ�Χ��-128 ~ 127
	signed char c1 = 127;//���߽�
	signed char c2 = -128;//��С�߽�

	//unsigned�ķ�Χ��0 ~ 255
	unsigned char c3 = 255;//���߽�
	cout << (int)c1 << endl;
	cout << (int)c2 << endl;
	cout << (int)c3 << endl;

	system("pause");
	return 0;
}
