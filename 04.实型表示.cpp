#include <iostream>;
using namespace std;

int main()
{
	//1、单精度float
	//2、双精度double

	float f1 = 3.1415926f;//一般会在单精度的值后写上一个f,代表float的首字母
	//这样写的原因是，不写f的话，系统直接默认的是double类型,并且不写的话folat定义之后，会将默认为double类型的3.14转换为float类型，多一步转换

	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;//C++中写出这么多数字也无意义，默认情况下输出一个小数会显示6位有效数字，显示更多数字需要配置

	cout << "d1 = " << d1 << endl;

	//统计float和double所占用的内存空间

	cout << "float占用的内存空间为：" << sizeof(float) << endl;	

	cout << "double占用的内存空间为：" << sizeof(double) << endl;

	//科学计数法
	float f2 = 3e2;//表示3×10的平方

	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;//3×0.1的平方

	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;


}