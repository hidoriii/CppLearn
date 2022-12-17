#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<string>

int main()
{
	cout << "Are you ready to study C++? (Y/N)" << endl;
	string select;
	cin >> select;
	while(true){
		if(select == "Y"){
			cout << "Welcome to C++!" << endl;
			break;
		}
		else if(select == "N"){
			cout << "You are kidding me?!" << endl;
		}
		else {
			cout << "Please input right answer!" << endl;
		}
	}

	return 0;
}

