#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout<<"��ѡ��"<<endl;
	cout<<"A.����ͨ B.������ C.���ӳ�"<<endl;
	char name;
	char name1='A',name2='B',name3='C';
	cin>>name;
	if(name==name1)
	{
		cout<<"����ͨ"<<endl;
	}
	else if(name==name2)
	{
		cout<<"�����"<<endl;
	}
	else if(name==name3)
	{
		cout<<"С����"<<endl;
	}	
	system("pause");
	return 0;
	
}
