#include<iostream>
using namespace std;
#include<string>

/*
带符号类型：signed
int, short, long, long long（C++11中新定义的一个数据类型）都是带符号的。前面默认有signed修饰 

无符号类型：unsigned
在int等类型前面加上unsigned修饰符后，该数据类型就变成无符号类型。例如unsigned long。
其中unsigned int 中的 int 可以省略不写。

char类型比较特殊，它被分为了3种：char、signed char 和 unsigned char。
需要注意的是，char类型和signed char 并不一样。
尽管字符型有3种，但是字符的表现的形式只有2种：带符号的和不带符号的。
类型char实际上会表现为上述两种形式中的一种，具体是哪种由编译器决定。
*/

int main1()
{
	//signed的范围：-128 ~ 127
	signed char c1 = 127;//最大边界
	signed char c2 = -128;//最小边界

	//unsigned的范围：0 ~ 255
	unsigned char c3 = 255;//最大边界
	cout << (int)c1 << endl;
	cout << (int)c2 << endl;
	cout << (int)c3 << endl;

	system("pause");
	return 0;
}
