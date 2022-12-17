#include<iostream>
using namespace std;

// 2.5.2 auto类型说明符

// 注意：auto一般会忽略掉顶层const，同时底层const会保留下来。

int main20()
{
    auto ival = 0, * p = &ival; // 正确：ival是整数，p是整型指针
    //auto sz = 0, pi = 3.14; // 错误：sz 和 pi 的类型不一致
    
    int i = 0;
    const int ci = i;

    //auto& n = i, * p2 = &ci; // 错误：i的类型是int而&ci的类型是const int
    

    // 如果希望auto推断出的类型是一个顶层const，需要明确指出：
    const auto& h = 42;


    system("pause");
    return 0;
}
