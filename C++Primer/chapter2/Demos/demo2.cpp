#include<iostream>
using namespace std;
#include<string>

int main2()
{
    bool b = 42; //b为真
    int i = b; //i的值为1
    i = 3.14; //i的值为3
    double pi = i; //pi的值为3.0

    unsigned char c = -1;// 假设char占8比特，c的值为255
    //当我们赋给无符号类型一个超出它表示范围的值时，结果是该值对256取模后所得的余数。因此c的值是255。

    signed char c2 = 256;// 假设char占8比特，c2的值是未定义的
    //当我们赋给带符号类型一个超出它表示范围的值时，结果是未定义的。
    //此时，程序可能继续工作，可能崩溃，也可能生成垃圾数据。

    system("pause");
    return 0;
}
