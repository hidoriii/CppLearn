#include<iostream>
using namespace std;
#include<string>
#include"Sales_item.h"

//1.5.2 ��ϰ
//1.6 ������
int main()
{
    Sales_item total; //������һ�����׼�¼�ı���

    //��ȡ��һ�����׼�¼����ȷ�������ݿ��Դ���
    if (cin >> total) {
        Sales_item trans; //�����ܺ͵ı���
        //��ȡ������ʣ��Ľ��׼�¼
        while (cin >> trans) {
            //����������ڴ�����ͬ����
            if (total.isbn() == trans.isbn()) {
                total += trans;
            }
            else {
                //��ӡǰһ����Ľ��
                cout << total << endl;
                total = trans; //total ���ڱ�ʾ��һ��������۶�
            }
        }
        //��ӡ���һ����Ľ��
        cout << total << endl;
    }
    else {
        //û�����룡�������
        cerr << "No data?!" << endl;
        return -1; //��ʾʧ��
    }

    return 0;
}