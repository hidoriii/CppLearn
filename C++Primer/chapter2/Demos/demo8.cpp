#include<iostream>
using namespace std;

//2.2.1 ����ϰ

string global_str;
int global_int;

int main8()
{
    //��ϰ2.9��
     
    //cin >> int input_value; //error.

    //int i = { 3.14 }; //error.���ڶ�ʧ��Ϣ��Σ�ա����벻����

    int i = 3.14;//true. ���û����ţ���ʹ��Ϣ��ʧ������Ҳ�����

    //double salary = wage = 9999.99; //error.


    //��ϰ2.10��

    string local_str = "";
    int local_int = 0;

    //ȫ�ֱ������Բ���ʾ��ʼ��
    //���У�
    // �ַ���Ĭ�ϳ�ʼ��Ϊ���ַ���
    // ���ͱ���Ĭ�ϳ�ʼ��Ϊ0
    cout << "δ������ʾ��ʼ����ȫ���ַ�����" << global_str << endl;
    cout << "δ������ʾ��ʼ����ȫ�����ͱ�����" << global_int << endl;
    //�ֲ�����������У���ʾ����ʼ��
    cout << "������ʾ��ʼ���ľֲ��ַ�����" << local_str << endl;
    cout << "������ʾ��ʼ���ľֲ����ͱ�����" << local_int << endl;

    system("pause");
    return 0;
}
