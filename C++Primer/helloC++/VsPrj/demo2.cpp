#include <iostream>
using namespace std;

//P16 ��ϰ1.4.4

int main2()
{
    int currVal = 0; // ��¼����ĵ�һ��ֵ
    int val = 0;     // ��¼����ʣ���ֵ

    // ��ȡ��һ��������ȷ��ȷʵ�����ݿ��Դ���
    // �������Ĳ���һ�����֣���ֱ��ִ��if��������
    if (cin >> currVal)
    {
        int count = 1; // ��¼�������ֳ��ֵĴ�������ʼ��Ϊ1���������ٳ���1�Σ�
        while (cin >> val)
        {
            if (val == currVal) // �����ظ���������
            {
                count++;
            }
            else // ���ֲ�������
            {
                // �������ǰ���ֳ��ֵĴ���
                cout << currVal << " occurs " << count << " times." << endl;
                // �ٰ��µģ����ظ��ģ����ָ�ֵ����ǰ����
                currVal = val;
                // ������ü�����
                count = 1;
            }
        }
        // whileѭ����������������ϣ��ǵ�Ҫ�����һ�����������ֵ�������������������ѭ�����ǲ������
        cout << currVal << " occurs " << count << " times." << endl;
    }

    system("pause");
    return 0;
}