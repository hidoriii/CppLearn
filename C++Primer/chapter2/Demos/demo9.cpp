#include<iostream>
using namespace std;

//2.2.2 变量声明和定义的关系

/*
	extern：声明关键字
	如果要声明一个变量而非定义它，就在变量名前添加关键字extern，而且不要显示的初始化变量
	任何包含了显示初始化的声明即成为定义。

	变量能且只能被定义一次，但是可以被多次声明。

	用途：C++分离式编程时用到。如果要在多个文件中使用同一变量，就必须将声明和定义分离。
		（可以做到 一个文件定义，多个文件使用）
*/

extern int i; //声明i，而非定义i
int j; //声明并定义j

//任何包含了显示初始化的声明即成为定义。
extern double pi = 3.14; //定义，而非声明

int main9()
{
	//i = 1; //error. 在函数体内部不允许初始化一个由extern关键字标记的变量

	j = 1; //true. 可以初始化未被extern修饰的变量
	cout << "j = " << j << endl;

	system("pause");
	return 0;
}
