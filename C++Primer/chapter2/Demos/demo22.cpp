#include<iostream>
using namespace std;
#include<string>

struct Sales_data {
	string bookNo; //�鱾���
	unsigned units_sold = 0; // ����
	double revenue = 0.0; // ��������
};

struct Foo { /*�˴�Ϊ��*/ };

//���struct���� ûд�ֺţ���ᱨ��
//����   ��return�� : �޷��ӡ�int��ת��Ϊ��Foo��
//����	��main���ķ�������ӦΪ��int�����ǡ�Foo��	Demos
//����	��Foo������ӡ�int���ǷǷ���(�Ƿ������ˡ�; �� ? )


int main22()
{
	Sales_data data1, data2;
	double price = 0; //��ĵ��ۣ����ڼ�����������
	//�����1�ʽ��ף�ISBN����������������
	cin >> data1.bookNo >> data1.units_sold >> price;
	//������������
	data1.revenue = data1.units_sold * price;

	//�����2�ʽ���
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	//��������ʽ��׵�ISBN�Ƿ���ͬ
	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		//�����ISBN�����������������۶ƽ���۸�
		cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0) {
			cout << totalRevenue / totalCnt << endl;
		}
		else {
			cout << "(no sales)" << endl;
		}
		return 0;
	}
	else {
		cerr << "Data must refer to the same ISBN" << endl;
		return -1;
	}

	return 0;
}
