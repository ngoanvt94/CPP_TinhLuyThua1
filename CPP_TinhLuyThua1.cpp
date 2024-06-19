// CPP_TinhLuyThua1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int so, somu, luythua = 1;
	cout << "nhapso:"; cin >> so;
	cout << "nhapmu:"; cin >> somu;
	for (int i = 0; i < somu; i++)
	{
		luythua *= so;
	}
	cout << "luythua:" << luythua;
	return 0;
}


