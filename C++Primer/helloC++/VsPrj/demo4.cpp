#include<iostream>
using namespace std;
#include<string>
#include"Sales_item.h"

//1.5.2 练习
//1.6 书店程序
int main()
{
    Sales_item total; //保存下一条交易记录的变量

    //读取第一条交易记录，并确保有数据可以处理
    if (cin >> total) {
        Sales_item trans; //保存总和的变量
        //读取并处理剩余的交易记录
        while (cin >> trans) {
            //如果我们仍在处理相同的书
            if (total.isbn() == trans.isbn()) {
                total += trans;
            }
            else {
                //打印前一本书的结果
                cout << total << endl;
                total = trans; //total 现在表示下一本书的销售额
            }
        }
        //打印最后一本书的结果
        cout << total << endl;
    }
    else {
        //没有输入！警告读者
        cerr << "No data?!" << endl;
        return -1; //表示失败
    }

    return 0;
}