#include<iostream>
using namespace std;

int main38()
{
	//利用嵌套循环实现九九乘法表
	for (int a = 1; a < 10; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			cout << b << "*" << a << "==" << a * b << "\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
