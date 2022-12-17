#include<iostream>
using namespace std;

int main17()
{
	const int v2 = 0;
	int v1 = v2;
	int* p1 = &v1, & r1 = v1;
	const int* p2 = &v2, * const p3 = &v1, & r2 = v2;


	r1 = v2;

	//p1 = p2; // 错误：p2包含底层const的定义，而p1没有
	p2 = p1; // 正确：p1不包含const限制，且p2也有底层const，所以即使p1包含底层const，也是正确的。

	//p1 = p3; // 错误：原因同上
	p2 = p3; // 正确：二者都包含底层const

	system("pause");
	return 0;
}
