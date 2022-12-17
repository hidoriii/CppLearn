#include<iostream>
using namespace std;
#include<string>

//2.1.3 字面值常量

int main5(){
    cout << "Hello World!\n";//字符串字面值
    //字符串字面值可以分行书写，表示的仍然是一个整体
    cout << "a really really long string literal "
        "that spans two lines." << endl;
    //在程序中，转义序列会被当做一个字符使用
    cout << '\n';

    cout << "\tHi \x4dO\115!\n"; //输出 Hi MOM! ，转到新一行

    //注意：反斜线后面跟着的八进制数超过3个的话，只有前三个数字与\构成转义序列
    cout << "\1234" << endl; //输出：S4

    //相反，\x要用到后面跟着的所有数字
    //cout << "\x1234" << endl;//报错：“4660” : 对字符来说太大

    system("pause");
    return 0;
}
