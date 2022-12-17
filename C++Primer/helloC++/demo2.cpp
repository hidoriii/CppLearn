#include <iostream>
using namespace std;

//P16 练习1.4.4

int main()
{
    int currVal = 0; // 记录输入的第一个值
    int val = 0;     // 记录输入剩余的值

    // 读取第一个数，并确保确实有数据可以处理
    //如果输入的不是一个数字，就直接执行if下面的语句。
    if (cin >> currVal)
    {
        int count = 1; // 记录连续数字出现的次数（初始化为1，代表至少出现1次）
        while (cin >> val)
        {
            if (val == currVal) // 数字重复（连续）
            {
                count++;
            }
            else // 数字不连续了
            {
                // 先输出当前数字出现的次数
                cout << currVal << " occurs " << count << " times." << endl;
                // 再把新的（不重复的）数字赋值给当前数字
                currVal = val;
                // 最后重置计数器
                count = 1;
            }
        }
        // while循环结束，即输入完毕，记得要把最后一个连续的数字单独在外面进行输出，在循环内是不输出的
        cout << currVal << " occurs " << count << " times." << endl;
    }

    system("pause");
    return 0;
}