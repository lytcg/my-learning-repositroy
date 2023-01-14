#include <iostream>
using namespace std;
int main() {
		int n;
		cin >> n;
		for (int h = 1; h <= n; h++)
		{
			for (int i = 1; i <= n - h; i++)
				cout << " ";
			for (int i = 1; i <= 2 * h - 1; i++)
				cout << "*";
			for (int i = 1; i <= n - h; i++)
				cout << " ";
			cout << endl;
 
		}
    system("pause");
    return 0;
}