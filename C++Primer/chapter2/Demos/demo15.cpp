#include<iostream>
using namespace std;

// 2.4 const 限定符

// 1.初始化和const

// 2.默认状态下，const对象仅在文件内有效
// 如果想在多文件之间共享const对象，必须在变量的定义之前添加extern关键字。

int get_size() {
    return 512;
}

int main15()
{
    const int i = get_size(); // true. 运行时初始化
    const int j = 42; // true. 编译时初始化
    //const int k; // error. k是一个为经初始化的常量

    int ival = 42;

    const int& const r2 = ival;
        
    ival = 1;

    //r2 = 1; // error. 说明r2是一个常量引用

    cout << ival << endl; // 输出：1

    system("pause");
    return 0;
}
