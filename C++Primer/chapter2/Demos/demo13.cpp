#include<iostream>
using namespace std;

// 2.3.3 ��⸴�����͵�����

int main13()
{
    int i = 42;
    //������һ�ֹ۵������Ϊ���ڶ�������У��������η���*��&�������ڱ��ζ����ȫ��������
    int* p = nullptr; // �Ϸ��������ײ�����
    // ����һ�еĴ���Ļ������������� int������ int*��* ������������p���ѡ�
    // Ӧ����ôд�Ŷԣ�int *p = nullptr;
    int* p2, p3; // p2��ָ��int��ָ�룬p3��int

    p2 = &i;
    p3 = i;

    system("pause");
    return 0;
}
