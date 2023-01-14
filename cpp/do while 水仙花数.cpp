//水仙花数是指一个三位数，它的每个位上的三次幂之和等于它本身


#include <iostream>
using namespace std;
int main()
{
	int num=100;
	do
	{
		int a,b,c;	
		int n=1;
		a=num%10;//个位 
		b=num/10%10;//十位 
		c=num/100;//百位 
		if(a*a*a+b*b*b+c*c*c==num)
		{
			cout<< "第"<<n<<"个水仙数为"<<num<<endl; 
			n++;			
		}	
		num++;
	}
	while(num<1000);
	
	system("pause");
	return 0;
}

