#include<iostream>
using namespace std;
int main()
{
	cout<<"ÇëÊäÈëÊ¥µ®Ê÷²ãÊý"<<endl; 
	while (1) {
		int n;
		cin >> n;
		for (int t = 1; t <= n; t++)
		{
			for (int i = 1; i <= n - t; i++)
				cout << " ";
			for (int i = 1; i <= 2 * t - 1; i++)
				cout << "*";
			for (int i = 1; i <= n - t; i++)
				cout << " ";
			cout << endl;
 
		}
		for (int i = 1; i <= n - 1; i++)
			cout << " ";
		cout << "|";
		for (int i = 1; i <= n - 1; i++)
			cout << " ";
		cout << endl;
		for (int i = 1; i <= n - 1; i++)
			cout << " ";
		cout << "|";
		for (int i = 1; i <= n - 1; i++)
			cout << " ";
		cout << endl;
		cout << "Merry Christmas" << endl;
		cout << "By Lyt" << endl<<endl<<endl;
		cout<<"ÇëÊäÈëÊ¥µ®Ê÷²ãÊý"<<endl; 
	};
}

