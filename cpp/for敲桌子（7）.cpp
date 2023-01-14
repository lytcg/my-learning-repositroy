//从1开始数到100，若个位含有7，或十位含有7，
//或该数字是7的倍数，则输出敲桌子。 


#include <iostream>
using namespace std;
int main()
{
	int num=1;
	for(num;num<=100;num++)
	{
		int a=num%10;//个位是7 
		int b=num/10; //十位是7
		int c=num%7;//的倍数 
		if(a==7)
		{
			cout<<"敲桌子"<<(num)<<endl; 
		}
		else if(b==7)
		{
			cout<<"敲桌子"<<(num)<<endl;
		}
		else if(c==0)
		{
			cout<<"敲桌子"<<(num)<<endl;
		}
		else
		{
			cout<<num<<endl;
		}		
	}
	
	system("pause");
	return 0;
	
 } 
