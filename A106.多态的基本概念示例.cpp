#include<iostream>
using namespace std;

//多态
class Animal
{
public:
	//Spear函数就是虚函数
	//函数前面加上virtual关键字，编程虚函数，那么编译器在编译的时候就不能确定函数调用了
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class Cat :public Animal
{
public:
	//重写  函数返回值类型  函数名 参数列表 完全相同。子类重写时virtual关键字可写可不写
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

//狗类
class Dog :public Animal
{
public:

	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
//我们希望传入什么对象，那么就调用什么对象的函数
//如果函数地址在编译阶段就能确定，那么静态联编
//如果函数地址在运行阶段才能确定，就是动态联编

//执行说话的函数
//地址早绑定   在编译阶段确定函数地址
//如果想执行让猫说话，那么这个函数的地址就不能提前绑定，需要在运行阶段进行绑定，即地址晚绑定。具体做法：加关键字virtual
void doSpeak(Animal & animal)//父类的引用在调用子类对象
{
	animal.speak();//此时（）会报错，因为调用的speak并不明确是调用的猫类的还是动物的
}
//多态满足条件
//1、有继承关系.如此例中，猫狗和动物
//2、子类重写父类中的虚函数。如此例中，猫狗重写speak虚函数，区别于函数重载
//多态使用：
//父类指针或引用指向子类对象

void test01()
{
	Cat cat;//Animal & animal = cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main()
{
	test01();

	system("pause");

	return 0;
}