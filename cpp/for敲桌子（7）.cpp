//��1��ʼ����100������λ����7����ʮλ����7��
//���������7�ı���������������ӡ� 


#include <iostream>
using namespace std;
int main()
{
	int num=1;
	for(num;num<=100;num++)
	{
		int a=num%10;//��λ��7 
		int b=num/10; //ʮλ��7
		int c=num%7;//�ı��� 
		if(a==7)
		{
			cout<<"������"<<(num)<<endl; 
		}
		else if(b==7)
		{
			cout<<"������"<<(num)<<endl;
		}
		else if(c==0)
		{
			cout<<"������"<<(num)<<endl;
		}
		else
		{
			cout<<num<<endl;
		}		
	}
	
	system("pause");
	return 0;
	
 } 
