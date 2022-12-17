#include<iostream>
using namespace std;
#include<string>

// 指定字面值的类型
// 通过添加前缀和后缀，可以改变整型、浮点型和字符型字面值的默认类型

//布尔字面值和指针字面值
//true 和 false 是布尔类型的字面值
//nullptr 是指针字面值

int main6()
{
    //示例：
    cout << L'a' << endl; //宽字符型字面值，类型是wchar_t
    cout << u8"hi!" << endl; //utf-8字符串字面值（utf-8用8位编码一个Unicode字符）
    cout << 42ULL << endl; //无符号整型字面值，类型是unsigned long long
    cout << 1e-3F << endl; //单精度浮点型字面值，类型是float
    cout << 3.14159L << endl; //扩展精度浮点型字面值，类型是long double


    //其他：
   
    //前缀：
    cout << u8'A' << endl;//char类型的前缀：u8。含义是：UTF-8（仅用于字符串字面常量）

    //后缀：               最小匹配类型
    cout << 123u << endl;//unsigned
    cout << 12345678L << endl;//long
    cout << 1234567890LL << endl;//long long


    system("pause");
    return 0;
}

/*
在VS上的运行结果为：
------------------
97
hi!
42
0.001
3.14159
------------------
*/