#include<iostream>
using namespace std;

// 2.4.4 constexpr 和 常量表达式

// 普通函数
int getSize() {
    return 42;
}

// constexpr函数
constexpr int size() {
    return 42;
}

// ival 和 jval 必须定义在函数体之外
constexpr int ival = 42;
int jval = 0;

int main18()
{
    const int sz = getSize(); // sz不是常量表达式
    //尽管sz本身是一个常量，但它的具体值（get_size函数）直到运行时才能获取到，所以不是常量表达式。


    constexpr int mf = 20; // 正确：20 是常量表达式
    constexpr int limit = mf + 1; // 正确：mf + 1 是常量表达式
    constexpr int sz2 = size(); // 只有当 size 是一个 constexpr函数 时，才是一条正确的声明语句

    //1.总结：一般来说，如果你认定变量是一个常量表达式，那就把它声明成constexpr类型。

    
    //2.在constexpr声明中如果定义了一个指针，限定符constexpr仅对指针有效，与指针所指的对象无关

    const int* p = nullptr; // p是一个指向整型常量的指针
    constexpr int* q = nullptr; // q是一个指向整数的常量指针（与顶层const含义相同）
    //上面一行代码等效于：int *const q = nullptr;


    constexpr const int* p2 = &ival; // p2是常量指针，指向整型常量ival
    //上面一行代码等效于：const int *const p2 = &ival;
    constexpr int* p3 = &jval; // p3是常量指针，指向整数jval


    system("pause");
    return 0;
}
