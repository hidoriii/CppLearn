#include<iostream>
using namespace std;

// 1. 指向指针的指针（多级指针）

// 2. 指向指针的引用

int main14()
{
	//1.指向指针的指针（多级指针）
	int ival = 1024;
	int* pi = &ival; // pi指向一个int型的数
	int** ppi = &pi; // ppi指向一个int型的指针
	// 此时，解引用指向指针的指针会得到一个指针。
	// 若要访问到最原始的那个对象，需要对指针的指针做两次解引用：
	cout << "The value of ival\n"
		<< "direct value: " << ival << "\n"
		<< "indirect value: " << *pi << "\n"
		<< "doubly indirect value: " << **ppi
		<< endl;


	//2.指向指针的引用
	int i = 42;
	int* p; // p是一个int型指针
	int*& r = p; // r是一个对指针p的引用

	r = &i; // r引用了一个指针，因此给r赋值&i就是令p指向i
	*r = 0; // 解引用r得到i，也就是p指向的对象，将i的值改为0
	cout << "i = " << i << endl;


	system("pause");
	return 0;
}
