#include <iostream>
using namespace std;
int main()
{
	cout<<"��ѡ����Ŀ�Ŀ���ͣ� A.�Ŀ�  B.���"<<endl;
	char type;
	char type1='A',type2='B';
	cin>>type;//ѡ������� 
	if (type==type1)//�����Ŀ� 
	{
		
		cout<<"��������ķ���"<<endl;	
		int a;//�����ĿƷ���a
		cin>>a;
		 if (a>=506)//�жϷ�����һ���� 
		 {
		 	cout<<"��ϲ�㣬�ɼ�����һ����"<<endl; 
		 }
		 else if(a>=443)//�жϷ����뱾���� 
		 	cout<<"��ϲ�㣬�ɼ����ڱ�����"<<endl;
		 else if(a<443)
		 	cout<<"�˱�"<<endl; 
		 	
	}
	else if (type==type2)//������� 
	{
		
		cout<<"��������ķ���"<<endl;
			int b;//�����ĿƷ���b
		cin>>b;
		 if (b>=487)//�жϷ�����һ���� 
		 {
		 	cout<<"��ϲ�㣬�ɼ�����һ����"<<endl; 
		 }
		 else if(b>=430)//�жϷ����뱾���� 
		 	cout<<"��ϲ�㣬�ɼ����ڱ�����"<<endl;
		 else if(b<430)
		 	cout<<"�˱�"<<endl;
		 	
	}
	else if(type==type)//��Ŀ���� 
	{
		
		cout<<"��Ŀ���ʹ���"; 

	}
	
return 0;	
}
