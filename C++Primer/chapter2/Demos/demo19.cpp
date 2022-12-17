#include<iostream>
using namespace std;

// 2.5 处理类型

// 2.5.1 类型别名

int main19()
{
    //1. 传统方式：使用typedef关键字给类型起别名
    typedef double wages; // wages 是 double 的同义词
    typedef wages base, * p; // base 是 double 的同义词，p 是 double* 的同义词


    //2. C++11新标准规定的新方式：使用别名声明来定义类型的别名
    using wages = double; // wages 是 double 的同义词

    wages hourly = 24, weekly = 7;


    //3. 指针、常量和类型别名
    typedef char* pstring;
    const pstring cstr = 0; // cstr 是指向char的常量指针
    // 等效于：char *const cstr = 0;
    *cstr = 'a'; // 正确：常量指针指向的值可以改
    //cstr = 0; // 错误：常量指针指向不能改


    system("pause");
    return 0;
}
