#include <iostream>
using namespace std;

/*
 * author: ray
 * brief: C++ Primer  
 *        读取数量不定的输入数据
 * date: 2022-12-13
 */



int main()
{
    int sum = 0;
    int value = 0;

    // 读取数据直到遇到文件尾，计算所有读入的值的和。
    // 当遇到文件结束符（EOF），或遇到一个无效输入时（例如输入的不是一个整数），就会停止输入。
    // 在Windows系统中，输入文件结束符的方法是敲 ctrl + Z，然后按Enter或Return键。
    // 在Unix系统中，包括Mac OS X系统中，文件结束符输入是用 ctrl + D。
    // （遇到空格，回车等不停止输入。ctrl + Z 可停止输入）
    while (cin >> value)
    {
        sum += value;
    }

    cout << "sum = " << sum << endl;

    system("pause");
    return 0;
}