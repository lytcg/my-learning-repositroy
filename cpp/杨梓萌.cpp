#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout<<"ÇëÑ¡Ôñ"<<endl;
	cout<<"A.ÁõìÇÍ¨ B.Ñîè÷ÃÈ C.Áõ²Ó³¾"<<endl;
	char name;
	char name1='A',name2='B',name3='C';
	cin>>name;
	if(name==name1)
	{
		cout<<"ÁõìÇÍ¨"<<endl;
	}
	else if(name==name2)
	{
		cout<<"Ñî·ÊÃÈ"<<endl;
	}
	else if(name==name3)
	{
		cout<<"Ð¡¹«Ö÷"<<endl;
	}	
	system("pause");
	return 0;
	
}
