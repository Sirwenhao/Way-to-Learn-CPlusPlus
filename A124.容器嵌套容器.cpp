#include<iostream>
using namespace std;
#include<vector>

//容器嵌套容器
void test01()
{
	vector<vector<int>>v;

	//创建小容器
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	vector<int>v5;

	//向小容器中添加数据
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
		v5.push_back(i + 5);
	}

	//将小容器中的数据放入大容器中
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);

	//通过大容器将所有的数据遍历
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//(*it) ---- 容器 vector<int>,*it是什么只需看vector<>的<>内是什么即可
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << "  ";
		}
		cout << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}