#include<iostream>
using namespace std;
#include<string>

// ָ������ֵ������
// ͨ�����ǰ׺�ͺ�׺�����Ըı����͡������ͺ��ַ�������ֵ��Ĭ������

//��������ֵ��ָ������ֵ
//true �� false �ǲ������͵�����ֵ
//nullptr ��ָ������ֵ

int main6()
{
    //ʾ����
    cout << L'a' << endl; //���ַ�������ֵ��������wchar_t
    cout << u8"hi!" << endl; //utf-8�ַ�������ֵ��utf-8��8λ����һ��Unicode�ַ���
    cout << 42ULL << endl; //�޷�����������ֵ��������unsigned long long
    cout << 1e-3F << endl; //�����ȸ���������ֵ��������float
    cout << 3.14159L << endl; //��չ���ȸ���������ֵ��������long double


    //������
   
    //ǰ׺��
    cout << u8'A' << endl;//char���͵�ǰ׺��u8�������ǣ�UTF-8���������ַ������泣����

    //��׺��               ��Сƥ������
    cout << 123u << endl;//unsigned
    cout << 12345678L << endl;//long
    cout << 1234567890LL << endl;//long long


    system("pause");
    return 0;
}

/*
��VS�ϵ����н��Ϊ��
------------------
97
hi!
42
0.001
3.14159
------------------
*/