#include<iostream>
using namespace std;

// 2.5.2 auto����˵����

// ע�⣺autoһ�����Ե�����const��ͬʱ�ײ�const�ᱣ��������

int main20()
{
    auto ival = 0, * p = &ival; // ��ȷ��ival��������p������ָ��
    //auto sz = 0, pi = 3.14; // ����sz �� pi �����Ͳ�һ��
    
    int i = 0;
    const int ci = i;

    //auto& n = i, * p2 = &ci; // ����i��������int��&ci��������const int
    

    // ���ϣ��auto�ƶϳ���������һ������const����Ҫ��ȷָ����
    const auto& h = 42;


    system("pause");
    return 0;
}
