#include<iostream>
using namespace std;
                                                                                                                                                                                                         
//2.1.2 ����ϰ
// ������д���
// �ܽ᣺�޷�������ʾ���Ǵ��ڵ���0��ֵ����ע�⣺���Ե���0��������

int main4()
{
	unsigned u1 = 10, u2 = 42;
	cout << "u2 - u1 = " << u2 - u1 << endl; // 32
	cout << "u1 - u2 = " << u1 - u2 << endl; // -32 + 4294967296 = 4294967264

	int i1 = 10, i2 = 42;
	cout << "i2 - i1 = " << i2 - i1 << endl; // 32
	cout << "i1 - i2 = " << i1 - i2 << endl; // -32
	cout << "i1 - u1 = " << i1 - u1 << endl; // 0
	cout << "u1 - i1 = " << u1 - i1 << endl; // 0

	system("pause");
	return 0;
}
