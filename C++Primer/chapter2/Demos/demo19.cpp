#include<iostream>
using namespace std;

// 2.5 ��������

// 2.5.1 ���ͱ���

int main19()
{
    //1. ��ͳ��ʽ��ʹ��typedef�ؼ��ָ����������
    typedef double wages; // wages �� double ��ͬ���
    typedef wages base, * p; // base �� double ��ͬ��ʣ�p �� double* ��ͬ���


    //2. C++11�±�׼�涨���·�ʽ��ʹ�ñ����������������͵ı���
    using wages = double; // wages �� double ��ͬ���

    wages hourly = 24, weekly = 7;


    //3. ָ�롢���������ͱ���
    typedef char* pstring;
    const pstring cstr = 0; // cstr ��ָ��char�ĳ���ָ��
    // ��Ч�ڣ�char *const cstr = 0;
    *cstr = 'a'; // ��ȷ������ָ��ָ���ֵ���Ը�
    //cstr = 0; // ���󣺳���ָ��ָ���ܸ�


    system("pause");
    return 0;
}
