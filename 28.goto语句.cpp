#include<iostream>
using namespace std;
int main()
{
	//goto语句

	cout << "1、XXXX" << endl;

	cout << "2、XXXX" << endl;

	goto FLAG;  //goto 后面定义的标记之后是分号

	cout << "3、XXXX" << endl;

	cout << "4、XXXX" << endl;

	FLAG:  //标记后面是冒号

	cout << "5、XXXX" << endl;


	system("pause");

	return 0;
}