#include<iostream>
using namespace std;
#include<string>

//2.1.3 ����ֵ����

int main5(){
    cout << "Hello World!\n";//�ַ�������ֵ
    //�ַ�������ֵ���Է�����д����ʾ����Ȼ��һ������
    cout << "a really really long string literal "
        "that spans two lines." << endl;
    //�ڳ����У�ת�����лᱻ����һ���ַ�ʹ��
    cout << '\n';

    cout << "\tHi \x4dO\115!\n"; //��� Hi MOM! ��ת����һ��

    //ע�⣺��б�ߺ�����ŵİ˽���������3���Ļ���ֻ��ǰ����������\����ת������
    cout << "\1234" << endl; //�����S4

    //�෴��\xҪ�õ�������ŵ���������
    //cout << "\x1234" << endl;//������4660�� : ���ַ���˵̫��

    system("pause");
    return 0;
}
