#include <iostream>
using namespace std;
int main()
{
	cout<<"请选择你的科目类型： A.文科  B.理科"<<endl;
	char type;
	char type1='A',type2='B';
	cin>>type;//选择文理科 
	if (type==type1)//进入文科 
	{
		
		cout<<"请输入你的分数"<<endl;	
		int a;//定义文科分数a
		cin>>a;
		 if (a>=506)//判断分数与一本线 
		 {
		 	cout<<"恭喜你，成绩高于一本线"<<endl; 
		 }
		 else if(a>=443)//判断分数与本科线 
		 	cout<<"恭喜你，成绩高于本科线"<<endl;
		 else if(a<443)
		 	cout<<"菜逼"<<endl; 
		 	
	}
	else if (type==type2)//进入理科 
	{
		
		cout<<"请输入你的分数"<<endl;
			int b;//定义文科分数b
		cin>>b;
		 if (b>=487)//判断分数与一本线 
		 {
		 	cout<<"恭喜你，成绩高于一本线"<<endl; 
		 }
		 else if(b>=430)//判断分数与本科线 
		 	cout<<"恭喜你，成绩高于本科线"<<endl;
		 else if(b<430)
		 	cout<<"菜逼"<<endl;
		 	
	}
	else if(type==type)//科目错误 
	{
		
		cout<<"科目类型错误"; 

	}
	
return 0;	
}
