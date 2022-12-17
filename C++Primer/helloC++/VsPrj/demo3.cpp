#include<iostream>
using namespace std;
#include"Sales_item.h"

//1.5.2 示例
int main3()
{	
	Sales_item item1, item2;
	cin >> item1 >> item2;//输入数据：编号 销量 价格

	//首先检查item1和item2是否表示相同的书
	if (item1.isbn() == item2.isbn()) {
		//相等：把销售量相加并输出
		//输出的数据有：编号 销量 总价格 平均价格
		cout << item1 + item2 << endl;
		return 0; //表示成功
	}
	//不相等的情况
	cerr << "Data must refer to same ISBN" << endl;
	return -1; //表示失败
}