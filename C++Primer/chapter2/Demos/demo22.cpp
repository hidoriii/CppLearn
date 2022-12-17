#include<iostream>
using namespace std;
#include<string>

struct Sales_data {
	string bookNo; //书本编号
	unsigned units_sold = 0; // 销量
	double revenue = 0.0; // 销售收入
};

struct Foo { /*此处为空*/ };

//如果struct后面 没写分号，则会报错：
//错误   “return” : 无法从“int”转换为“Foo”
//错误	“main”的返回类型应为“int”而非“Foo”	Demos
//错误	“Foo”后面接“int”是非法的(是否忘记了“; ” ? )


int main22()
{
	Sales_data data1, data2;
	double price = 0; //书的单价，用于计算销售收入
	//读入第1笔交易：ISBN、销售数量、单价
	cin >> data1.bookNo >> data1.units_sold >> price;
	//计算销售收入
	data1.revenue = data1.units_sold * price;

	//读入第2笔交易
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	//检查这两笔交易的ISBN是否相同
	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		//输出：ISBN、总销售量、总销售额、平均价格
		cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0) {
			cout << totalRevenue / totalCnt << endl;
		}
		else {
			cout << "(no sales)" << endl;
		}
		return 0;
	}
	else {
		cerr << "Data must refer to the same ISBN" << endl;
		return -1;
	}

	return 0;
}
