#include<iostream>
using namespace std;

// 2.5.3 decltype

int main21()
{
    //decltype��auto�Զ���const�Ĵ���ͬ
    //���decltypeʹ�õı��ʽ��һ����������decltype���ظñ��������ͣ���������const���������ڣ�
    const int ci = 0, & cj = ci;
    decltype(ci) x = 0; // x�������� const int
    decltype(cj) y = x; // y�������� const int&��y�󶨵�����x
    //decltype(cj) z; // ����z��һ�����ã������ʼ��


    // decltype�Ľ����������������
    int i = 42, * p = &i, & r = i;
    decltype(r + 0) b; // ��ȷ�����ʽ���ӷ����Ľ����int�����b��һ����δ��ʼ���ģ�int
    //decltype(*p) c; // ����c �� int& �������ʼ��

    // ����decltype���õı��ʽ��˵�����������������һ�Ի������ţ���õ��������벻������ʱ���в�ͬ��
    //decltype((i)) d; // ����d��int&�������ʼ��
    decltype(i) e; // ��ȷ��e��һ����δ��ʼ���ģ�int

    //�мǣ�decltype((variable))�Ľ����Զ�����ã���decltype(variable)�Ľ��ֻ�е�variable�������һ������ʱ�������á�


    system("pause");
    return 0;
}
