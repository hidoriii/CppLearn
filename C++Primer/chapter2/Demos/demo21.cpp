#include<iostream>
using namespace std;

// 2.5.3 decltype

int main21()
{
    //decltype与auto对顶层const的处理不同
    //如果decltype使用的表达式是一个变量，则decltype返回该变量的类型（包括顶层const和引用在内）
    const int ci = 0, & cj = ci;
    decltype(ci) x = 0; // x的类型是 const int
    decltype(cj) y = x; // y的类型是 const int&，y绑定到变量x
    //decltype(cj) z; // 错误：z是一个引用，必须初始化


    // decltype的结果可以是引用类型
    int i = 42, * p = &i, & r = i;
    decltype(r + 0) b; // 正确：表达式（加法）的结果是int，因此b是一个（未初始化的）int
    //decltype(*p) c; // 错误：c 是 int& ，必须初始化

    // 对于decltype所用的表达式来说，如果变量名加上了一对或多对括号，则得到的类型与不加括号时会有不同。
    //decltype((i)) d; // 错误：d是int&，必须初始化
    decltype(i) e; // 正确：e是一个（未初始化的）int

    //切记：decltype((variable))的结果永远是引用，而decltype(variable)的结果只有当variable本身就是一个引用时才是引用。


    system("pause");
    return 0;
}
