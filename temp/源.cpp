#include<iostream>
using namespace std;
int main(void)
{
	int ind, x;
	char c[10] = { "这是测试" };//可以根据需要进行修改。
	for (x = 0; x<5; x++)//输出五排汉字
	{
		for (ind = x; ind>0; ind--)cout << " ";
		​cout << c << endl;
	}
	return 0;
}