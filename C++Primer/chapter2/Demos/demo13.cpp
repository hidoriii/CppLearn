#include<iostream>
using namespace std;

// 2.3.3 理解复合类型的声明

int main13()
{
    int i = 42;
    //经常有一种观点会误以为：在定义语句中，类型修饰符（*或&）作用于本次定义的全部变量。
    int* p = nullptr; // 合法但是容易产生误导
    // 上面一行的代码的基本数据类型是 int，而非 int*。* 仅仅是修饰了p而已。
    // 应该这么写才对：int *p = nullptr;
    int* p2, p3; // p2是指向int的指针，p3是int

    p2 = &i;
    p3 = i;

    system("pause");
    return 0;
}
