//ˮ�ɻ�����ָһ����λ��������ÿ��λ�ϵ�������֮�͵���������


#include <iostream>
using namespace std;
int main()
{
	int num=100;
	do
	{
		int a,b,c;	
		int n=1;
		a=num%10;//��λ 
		b=num/10%10;//ʮλ 
		c=num/100;//��λ 
		if(a*a*a+b*b*b+c*c*c==num)
		{
			cout<< "��"<<n<<"��ˮ����Ϊ"<<num<<endl; 
			n++;			
		}	
		num++;
	}
	while(num<1000);
	
	system("pause");
	return 0;
}

