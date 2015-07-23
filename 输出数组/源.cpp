#include<iostream>
using namespace std;

int main(void)
{
	int a[3][3],x;
	for (x = 0; x <= 2; x++)
	{
			cin >> a[x][0] >> a[x][1] >> a[x][2];
	}
	cout << "    "<<a[0][1] << endl <<a[1][0] << "   "<<a[1][1] << "   "<<a[1][2] << endl << "    " << a[2][1] << endl;
	return 0;
}