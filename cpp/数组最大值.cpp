#include <iostream>
using namespace std;
int main()
{
	int arr[5]={};//������{}�Ҳ�cin����arr3Ϊ27��δ֪bug 
	cout<<"�������������"<<endl; 
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
	int max;
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<"���ֵΪ"<<max<<endl; 	

	system("pause");
	return 0;
}
