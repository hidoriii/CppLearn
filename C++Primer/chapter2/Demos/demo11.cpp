#include<iostream>
using namespace std;

//2.3 ��������

//2.3.1 ����

int main11()
{
    int ival = 42;
    int& refVal = ival; // refVal ָ�� ival (�� ival ����һ������)
    //int& refVal2; // error. ���ñ��뱻��ʼ��
    cout << refVal << endl; // ���: 42

    refVal = 2;
    cout << ival << endl; // ���: 2

    int i = refVal; // �� int i = ival; ��ִ�н��һ��

    int& refVal3 = refVal;
    cout << refVal3 << endl;

    //int& refVal4 = 10; // error. �������͵ĳ�ʼֵ������һ������

    double dval = 3.14;
    //int& refVal5 = dval; // error. �˴��������͵ĳ�ʼֵ������int�Ͷ���


    system("pause");
    return 0;
}
