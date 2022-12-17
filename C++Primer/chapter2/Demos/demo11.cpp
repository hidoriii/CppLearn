#include<iostream>
using namespace std;

//2.3 复合类型

//2.3.1 引用

int main11()
{
    int ival = 42;
    int& refVal = ival; // refVal 指向 ival (是 ival 的另一个名字)
    //int& refVal2; // error. 引用必须被初始化
    cout << refVal << endl; // 输出: 42

    refVal = 2;
    cout << ival << endl; // 输出: 2

    int i = refVal; // 与 int i = ival; 的执行结果一样

    int& refVal3 = refVal;
    cout << refVal3 << endl;

    //int& refVal4 = 10; // error. 引用类型的初始值必须是一个对象

    double dval = 3.14;
    //int& refVal5 = dval; // error. 此处引用类型的初始值必须是int型对象


    system("pause");
    return 0;
}
