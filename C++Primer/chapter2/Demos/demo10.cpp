#include<iostream>
using namespace std;

//2.2.4 ���ֵ�������

int reused = 42; // reused ӵ��ȫ��������

int main10()
{
    int unique = 0; // unique ӵ�п�������

    // ���#1: ʹ��ȫ�ֱ��� reused, ��� 42 0
    cout << reused << " " << unique << endl;

    int reused = 0; // �½��ֲ�����reused, ������ȫ�ֱ���reused
    // ���#2: ʹ�þֲ����� reused, ��� 0 0
    cout << reused << " " << unique << endl;

    // ���#3: ��ʾ�ķ���ȫ�ֱ��� reused, ��� 42 0
    cout << ::reused << " " << unique << endl;

    system("pause");
    return 0;
}
