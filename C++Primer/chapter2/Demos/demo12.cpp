#include<iostream>
using namespace std;
#include<cstdlib>
//2.3.2 指针

// 注意: 引用不是对象, 没有实际地址, 所以不能定义指向引用的指针

// 解引用符（操作符 * ）
// 解引用操作仅适用于那些确实指向了某个对象的有效指针。

// 空指针：不指向任何对象的指针

// 建议：初始化所有指针

// 任何非0指针对应的条件值都是true。

// void* 指针：这是一种特殊的指针类型，可用于存放任意对象的地址。
// 但是不是直接操作 void* 指针所指的对象，因为我们并不知道这个对象到底是什么类型，也就无法确定能在这个对象上做哪些操作。
// 有关void* 类型的其他知识，后面还会讲到。例如：获取 void* 指针所存地址的方法。

int main12()
{
    // 1.空指针的几种生成方法：
    int* p1 = nullptr; // 等价于 int *p1 = 0;（最直接的方法，也是C++11新标准刚引入的一种方法）
    //nullptr是一种特殊类型的字面值，它可以被转换成任意其他类型的指针类型。
    int* p2 = 0; // 直接将p2初始化为字面常量0
    //需要首先 #include<cstdlib>
    int* p3 = NULL; // 等价于 int *p3 = 0;（NULL为预处理变量，关于预处理器的知识后面会详细介绍）
    //在新标准下，现在的C++程序最好使用nullptr，同时尽量避免使用NULL。


    // 2.任何非0指针对应的条件值都是true
    int ival = 1024;
    int* pi = 0; // pi 合法，是一个空指针
    int* pi2 = &ival; // pi2 合法，里面存放着ival的地址
    if (pi) {
        cout << "pi is not a null pointer" << endl;
    }
    else {
        cout << "pi is a null pointer" << endl;
    }
    if (pi2) {
        cout << "pi2 is not a null pointer" << endl;
    }
    else {
        cout << "pi2 is a null pointer" << endl;
    }

    // 3. void* 指针
    double obj = 3.14, * pd = &obj; // 正确：void* 能存放任意类型对象的地址
    void* pv = &obj; // obj可以是任意类型的对象
    pv = pd; // pv可以存放任意类型的指针


    system("pause");
    return 0;
}
