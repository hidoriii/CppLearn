#include<iostream>
using namespace std;

// 2.4.4 constexpr �� �������ʽ

// ��ͨ����
int getSize() {
    return 42;
}

// constexpr����
constexpr int size() {
    return 42;
}

// ival �� jval ���붨���ں�����֮��
constexpr int ival = 42;
int jval = 0;

int main18()
{
    const int sz = getSize(); // sz���ǳ������ʽ
    //����sz������һ�������������ľ���ֵ��get_size������ֱ������ʱ���ܻ�ȡ�������Բ��ǳ������ʽ��


    constexpr int mf = 20; // ��ȷ��20 �ǳ������ʽ
    constexpr int limit = mf + 1; // ��ȷ��mf + 1 �ǳ������ʽ
    constexpr int sz2 = size(); // ֻ�е� size ��һ�� constexpr���� ʱ������һ����ȷ���������

    //1.�ܽ᣺һ����˵��������϶�������һ���������ʽ���ǾͰ���������constexpr���͡�

    
    //2.��constexpr���������������һ��ָ�룬�޶���constexpr����ָ����Ч����ָ����ָ�Ķ����޹�

    const int* p = nullptr; // p��һ��ָ�����ͳ�����ָ��
    constexpr int* q = nullptr; // q��һ��ָ�������ĳ���ָ�루�붥��const������ͬ��
    //����һ�д����Ч�ڣ�int *const q = nullptr;


    constexpr const int* p2 = &ival; // p2�ǳ���ָ�룬ָ�����ͳ���ival
    //����һ�д����Ч�ڣ�const int *const p2 = &ival;
    constexpr int* p3 = &jval; // p3�ǳ���ָ�룬ָ������jval


    system("pause");
    return 0;
}
