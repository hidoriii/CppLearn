#include <iostream>
using namespace std;

/*
 * author: ray
 * brief: C++ Primer
 *        ��ȡ������������������
 * date: 2022-12-13
 */



int main1()
{
    int sum = 0;
    int value = 0;

    // ��ȡ����ֱ�������ļ�β���������ж����ֵ�ĺ͡�
    // �������ļ���������EOF����������һ����Ч����ʱ����������Ĳ���һ�����������ͻ�ֹͣ���롣
    // ��Windowsϵͳ�У������ļ��������ķ������� ctrl + Z��Ȼ��Enter��Return����
    // ��Unixϵͳ�У�����Mac OS Xϵͳ�У��ļ��������������� ctrl + D��
    // �������ո񣬻س��Ȳ�ֹͣ���롣ctrl + Z ��ֹͣ���룩
    while (cin >> value)
    {
        sum += value;
    }

    cout << "sum = " << sum << endl;

    system("pause");
    return 0;
}