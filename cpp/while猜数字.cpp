#include <iostream>
#include <string> //����string�����ַ��� 
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
 {
	srand((unsigned int)time(NULL));//���ctimeͷ�ļ���ʱ�������
	int num=rand()%100+1;//randα�������Ҫ<stdlib.h>ͷ�ļ� 	
	int val;
	cout<<"������1-100�����������һ�����֣������������Ƕ���" <<endl; 
	cout<<"��������µ�����" ;
	while(1)//1Ϊ�棬��ѭ��
	{   
		cin>>val;
		if (num>val)
		{
			cout<<"���ֹ�С"<<endl<<"�������������" ; 
		}
		else if(num<val)
		{
			cout<<"���ֹ���"<<endl<<"�������������" ;
		}
		else
		{
			cout<<"��ϲ���¶���"<<endl;
			break;
		} 	
	} 
		
	
	
	
	
	 system("pause");
 		 return 0;
 }
