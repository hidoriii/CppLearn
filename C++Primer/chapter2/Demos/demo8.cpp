#include<iostream>
using namespace std;

//2.2.1 节练习

string global_str;
int global_int;

int main8()
{
    //练习2.9：
     
    //cin >> int input_value; //error.

    //int i = { 3.14 }; //error.存在丢失信息的危险。编译不给过

    int i = 3.14;//true. 不用花括号，即使信息丢失，编译也会过。

    //double salary = wage = 9999.99; //error.


    //练习2.10：

    string local_str = "";
    int local_int = 0;

    //全局变量可以不显示初始化
    //其中：
    // 字符串默认初始化为空字符串
    // 整型变量默认初始化为0
    cout << "未进行显示初始化的全局字符串：" << global_str << endl;
    cout << "未进行显示初始化的全局整型变量：" << global_int << endl;
    //局部变量必须进行（显示）初始化
    cout << "进行显示初始化的局部字符串：" << local_str << endl;
    cout << "进行显示初始化的局部整型变量：" << local_int << endl;

    system("pause");
    return 0;
}
