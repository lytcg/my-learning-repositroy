#include <iostream>
#include <string> //利用string定义字符串 
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
 {
	srand((unsigned int)time(NULL));//添加ctime头文件，时间随机数
	int num=rand()%100+1;//rand伪随机数需要<stdlib.h>头文件 	
	int val;
	cout<<"程序在1-100中随机生成了一个数字，请猜这个数字是多少" <<endl; 
	cout<<"请输入你猜的数字" ;
	while(1)//1为真，死循环
	{   
		cin>>val;
		if (num>val)
		{
			cout<<"数字过小"<<endl<<"请继续输入数字" ; 
		}
		else if(num<val)
		{
			cout<<"数字过大"<<endl<<"请继续输入数字" ;
		}
		else
		{
			cout<<"恭喜您猜对了"<<endl;
			break;
		} 	
	} 
		
	
	
	
	
	 system("pause");
 		 return 0;
 }
