#include<iostream>
using namespace std;

// 2.4 const �޶���

// 1.��ʼ����const

// 2.Ĭ��״̬�£�const��������ļ�����Ч
// ������ڶ��ļ�֮�乲��const���󣬱����ڱ����Ķ���֮ǰ���extern�ؼ��֡�

int get_size() {
    return 512;
}

int main15()
{
    const int i = get_size(); // true. ����ʱ��ʼ��
    const int j = 42; // true. ����ʱ��ʼ��
    //const int k; // error. k��һ��Ϊ����ʼ���ĳ���

    int ival = 42;

    const int& const r2 = ival;
        
    ival = 1;

    //r2 = 1; // error. ˵��r2��һ����������

    cout << ival << endl; // �����1

    system("pause");
    return 0;
}
