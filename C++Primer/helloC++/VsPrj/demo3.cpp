#include<iostream>
using namespace std;
#include"Sales_item.h"

//1.5.2 ʾ��
int main3()
{	
	Sales_item item1, item2;
	cin >> item1 >> item2;//�������ݣ���� ���� �۸�

	//���ȼ��item1��item2�Ƿ��ʾ��ͬ����
	if (item1.isbn() == item2.isbn()) {
		//��ȣ�����������Ӳ����
		//����������У���� ���� �ܼ۸� ƽ���۸�
		cout << item1 + item2 << endl;
		return 0; //��ʾ�ɹ�
	}
	//����ȵ����
	cerr << "Data must refer to same ISBN" << endl;
	return -1; //��ʾʧ��
}