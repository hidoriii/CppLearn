#include<iostream>
using namespace std;

//2.2.4 名字的作用域

int reused = 42; // reused 拥有全局作用域

int main10()
{
    int unique = 0; // unique 拥有块作用域

    // 输出#1: 使用全局变量 reused, 输出 42 0
    cout << reused << " " << unique << endl;

    int reused = 0; // 新建局部变量reused, 覆盖了全局变量reused
    // 输出#2: 使用局部变量 reused, 输出 0 0
    cout << reused << " " << unique << endl;

    // 输出#3: 显示的访问全局变量 reused, 输出 42 0
    cout << ::reused << " " << unique << endl;

    system("pause");
    return 0;
}
