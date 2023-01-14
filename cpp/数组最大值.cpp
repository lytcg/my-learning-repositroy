#include <iostream>
using namespace std;
int main()
{
	int arr[5]={};//若不加{}且不cin，则arr3为27，未知bug 
	cout<<"请输入五个数字"<<endl; 
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
	int max;
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<"最大值为"<<max<<endl; 	

	system("pause");
	return 0;
}
