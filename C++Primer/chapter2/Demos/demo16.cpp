#include<iostream>
using namespace std;

// ����const �� �ײ�const

int main16()
{
    int i = 0;
    int* const p1 = &i; // ���ܸı�p1��ֵ������һ������const
    const int ci = 42; // ���ܸı�ci��ֵ������һ������const
    const int* p2 = &ci; // ����ı�p2��ֵ������һ���ײ�const


    const int* const p3 = p2; // ���ҵ�const�Ƕ���const��������ǵײ�const
    const int& r = ci; // �����������õ�const���ǵײ�const


    i = ci; // ��ȷ������ci��ֵ��ci��һ������const���Դ˲�����Ӱ��
    p2 = p3; // ��ȷ��p2��p3ָ��Ķ���������ͬ��p3����const�Ĳ��ֲ�Ӱ��


    //int* p = p3; // ����p3�����ײ�const�Ķ��壬��pû��
    p2 = p3; // ��ȷ��p2��p3���ǵײ�const
    p2 = &i; // ��ȷ��int* ��ת���� const int*
    //int& r = ci; // ������ͨ�� int& ���ܰ󶨵� int ������
    const int& r2 = i; // ��ȷ��const int& ���԰󶨵�һ����ͨ int ��


    system("pause");
    return 0;
}
