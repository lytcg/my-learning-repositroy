#include <iostream>
#include <string> //利用string定义字符串 
#include <stdlib.h>//伪随机数 
#include <ctime>// 时间随机数 
using namespace std;

			//函数
//int add(int num1,int num2) 
//{
//	int sum=num1+num2;	
//	return sum;	
//}	
/*
  返回值类型 函数名 (参数列表)
  {
  函数体语句
  
  return表达式 
  }
*/  
//
//void swap02 (int *p1,int *p2)
//{
//	int temp=*p1;
//	*p1=*p2;
//	*p2=temp;	
//}










//   
//void swap(int num1,int num2)//void不用写return 
//{
//	cout<<"交换前"<<endl<<"num1= "<<num1<<endl;   	
//   	cout<<"num2= "<<num2<<endl;
//   	int tem;
//   	tem=num2;
//   	num2=num1;
//   	num1=tem;
//   	cout<<"after swap: "<<endl;
//   	cout<<"num1= "<<num1<<endl;
//   	cout<<"num2= "<<num2<<endl;
//}
// 
//bubblesort (int *arr,int len)
//{
//	for(int i=0;i<len;i++)
//	{
//		for(int j=0;j<len-1-i;j++)
//		{
//			if(arr[j]>arr[j+1]) 
//			{
//				int tem=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tem;
//			}			
//		}
//	}	
//}

struct student//结构体定义  学生 
{
	string name;
	int age;
	int score;
};
//struct teacher
//{
//    //成员列表
//	int id; //职工编号
//	string name;  //教师姓名
//	int age;   //教师年龄
//	struct student stu; //子结构体 学生
//};

void printstudent (const student *stu)//加const防止函数体中的误操作
{
	//stu->age=100;//操作失败，因为加了const修饰
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
}






int main()
 {
// 			//字符定义 
// 	char zifu='n';//char定义单字符型 
// 	cout<<"字符型内存占用："<<sizeof (char)<< endl;
// 	cout<<zifu<<endl;
// 	cout<<(int)zifu<<endl;//显示zifu所定义变量的ASCII 
//	
//	char str1[]="hello world";//定义长字符，变量名前加[]，字符串用“” 
//	cout<< str1<<endl; 
//	string str2="hello world";//方式2，需头文件 
//	cout<< str2<<endl;
//	
//	 	  	//单精度浮点数 
// 	float num1=3.14f;//float定义小数后加f，否则默认double  
// 	cout<< num1<<endl;

// 			//定义常量 
// 	#define constant1 100//定义常数1//尽量避免使用define，且应定义在函数外 
// 	cout<< constant1<<endl//cuo;wu//编译报错，原因未知*现已知 
//	cout<<constant1;//原因：define后不加“；” 
//	cout<<endl; //endl换行后无报错 
// 	const int constant2=101;//定义常数2 
// 	cout<<constant2<<endl;
// 	
// 			 //转义字符 
// 	cout<<"hello world\n";//\n,c语言中换行，与endl功能相同，位置不同 
//	cout<<"\\"<<endl; //\是特殊字符，两个\输出一个\.
//	cout<<"aaa\thello world"<<endl; //补全8个字符，整齐数据 

//			//bool型定义 
//	bool flag1=true;//bool只有两个值，0=f，其他数=t 
//	cout<<flag1<<endl;    
//	bool flag2=false;
//	cout<<flag2<<endl; 
//	cout<<"bool类型所占字节大小为"<<sizeof(bool)<<endl; 

//			//输入实例 
//	int ci;
//	cout<<"请输入ci的值"<<endl;//cin的用法 
//	cin>>ci;
//	cout<<"ci的值为"<<ci; 
//	
//	char cha='c';
//	cout<<"请给字符型cha赋值"<<endl; 
//	cin>>cha;//若赋值超过限制则只显示第一个字符，赋erd显示e 
//	cout<<"字符型变量cha的值为" <<cha<<endl; 

//			//运算
//	int a1=10;
//	int b1=3;
//	double c1=a1/b1; 
//	cout<< c1<<endl;//结果为3，因为a1,b1是整形 
//	
//	cout<<a1%b1<<endl;//取余数 (两个小数不可做取模运算) 
	
//	int a2=10;//前置递增先对变量+1，再计算表达式 
//	int b2=++a2*10;
//	cout<<"a2的值为"<<a2<<endl<<"b2的值为"<<b2<<endl;
//	
//	int a3=10;//后置递增先计算表达式，再对变量+1
//	int b3=a3++*10;
//	cout<<"a3的值为"<<a3<<endl<<"b3的值为"<<b3<<endl;
	
//	int a=10;
//	a+=2;//即a=a+2 
//	cout<<"a="<<a<<endl;
//	 
//	a=10;
//	a-=2;//即a=a-2
//	cout<<"a="<<a<<endl;
//	//a*=2,a/=2,a%=2等同理*
	 
//	int a=10,b=20;
//	cout<<(a==b)<<endl;//()中的优先运算。
//	cout<<(a!=b)<<endl;//若真则1，假则0
//	cout<<(a>=b)<<endl;
//	cout<<(a<=b)<<endl; 
	
			//逻辑运算 
//	int a=10;//非! 
//	cout<<!a<<endl;//0代表假，其他数代表真 
//	cout<<!!a<<endl;
	 
//	int a=10,b=19;//与&& 
//	cout<<(a&&b)<<endl;
//	a=0;
//	cout<<(a&&b)<<endl;
	
//	int a=10,b=19;//或|| 
//	cout<<(a||b)<<endl;
//	a=0;
//	cout<<(a||b)<<endl;		
//	b=0;
//	cout<<(a||b)<<endl;
//	
//			//if条件判断
//	int score;
//	cout<<"请输入您的分数："<<endl;
//	cin>>score;
//	cout<<"您的分数为："<<score<<endl;
//	if (score>535)//注意，if条件后不加分号
//		{
//			cout<<"恭喜您，成绩高于lyt"<<endl; 
//		}		 
//	else if(score==535)	
//		{
//			cout<<"成绩与lyt相同"<<endl;
//		}
//	else if(score<535)	
//	    {
//	    	cout<<"成绩低于lyt"<<endl;
//		}
//
//			//三目运算符
//	int a=10,b=20,c;//与if else 效果相同 
//	c=(a>b?a:b);//?前是判断条件，若真则输出?and:中间的，若假则输出:后的 
//	cout<<"c的值为"<<c<<endl;//c=20
//	(a>b?a:b)=1000;
//	cout<<"a的值为"<<a<<endl;
//	cout<<"b的值为"<<b<<endl;//此时b为1000 
//	
//			//switch语句 
//	int score;
//	cout<<"请输入你的评分(1-10)"<<endl;
//	cin>>score;//endl;
//	cout<<"你的评分是"<<score<<endl;
//	switch(score) //表达式只能说整形或字符型 
//	{
//		//case >10://不可判断，会报错
//			//cout<<"有病"<<endl;
//			//break;
//		//case是选择入口，进入后需break，否则执行接下来所有cout						
//		case 10: 
//			cout<<"您认为电影是满分" <<endl;
//			break;
//		case 9:
//			cout<<"您认为电影是9分" <<endl;
//			break;
//		case 8:
//			cout<<"您认为电影是8分" <<endl;
//			break;
//		case 7:
//			cout<<"您认为电影是7分"<<endl;
//			break;
//		case (5||6)://可以使用||，但需要加括号 
//			cout<<"您认为电影是5/6分"<<endl;
//			break;
//		default:
//			cout<<"你觉得电影贼烂"	<<endl;
//			break;			
//	}		
	
			//循环结构
//	int num=0;
//	while (num<10)
//	{
//		cout<<"num="<<num<<endl;
//		num++;			
//	}
//
//			//猜数字小游戏 
//	srand((unsigned int)time(NULL));//添加ctime头文件，时间随机数
//	int num=rand()%100+1;//rand伪随机数需要<stdlib.h>头文件 	
//	int val;
//	cout<<"程序在1-100中随机生成了一个数字，请猜这个数字是多少" <<endl; 
//	cout<<"请输入你猜的数字" ;
//	while(1)//1为真，死循环
//	{   
//		cin>>val;
//		if (num>val)
//		{
//			cout<<"数字过小"<<endl<<"请继续输入数字" ; 
//		}
//		else if(num<val)
//		{
//			cout<<"数字过大"<<endl<<"请继续输入数字" ;
//		}
//		else
//		{
//			cout<<"恭喜您猜对了"<<endl;
//			break;
//		} 	
//	} 
//		
//			//嵌套循环
//	for(int i=0;i<15;i++)
//	{
//		for(int n=0;n<10;n++)
//		{
//			cout<<"* ";
//		}
//		cout<<endl;	
//	} 
//		
//			//跳转语句，break continue goto 
//	for(int a=0;a<20;a++)
//	{
//		if(a%2==0)	
//		{
//			continue;//continue跳过剩余步骤，执行下次循环 
//		}			 //break跳出当前循环 
//		cout<<a<<endl;		
//	}				
//				
//
//	cout<<"11111"<<endl;
//	goto FLAG;//飞雷神 
//	cout<<"22222"<<endl;	
//	cout<<"33333"<<endl;	
//	cout<<"44444"<<endl;	
//	FLAG:	
//	cout<<"55555"<<endl;	
//		
//		
//			//一维数组
//	//1.数据类型 数组名[数组长度];
//	cout<<"请输入arr1[0]的值"<<endl;//数组第一个是arr[0] 
//	int arr[10];
//	cin>>arr[0];
//	cout<<endl<<"arr[0]的值为"<<arr[0]<<endl;	
//	//2.数据类型 数组名[数组长度]={值1，值2，......};
//	int arr2[10]={1,2,3,4,5,6,7,8,9};//最后差一个，自动补0	
//	for(int i=0;i<10;i++)
//	{
//		cout<<arr2[i]<<endl;
//	}
//	//3.数据类型 数组名[]={值1，值2，......};
//		int arr3[]={9,8,7,6,5,4,3,2,1};//数组仅有9个值 
//		for(int i=0;i<10;i++)//若输出arr[10]则为0 
//	{
//		cout<<arr3[i]<<endl;
//	}
//	//注意1.数组名的命名规范与变量一致，不能和变量重名
//	//    2.数组中下标是从0开始索引 
//		
//	//可以通过数组名统计整个数组占用内存大小
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	cout<<"整个数组占用内存为"<<sizeof(arr)<<endl;	
//	cout<<"每个元素占用内存为"<<sizeof(arr[1])<<endl;
//	cout<<"数组中元素个数为"<<sizeof(arr)/sizeof(arr[1])<<endl;
//	
//	//可以通过数组名查看数组首地址
//	cout<<"数组首地址为"<<arr<<endl;
//	cout<<"数组首地址(十进制)为"<<(long long)arr<<endl;//longlong强行16转10  
//	cout<<"数组中第一个元素的地址为"<<&arr[0]<<endl;//&取址符号 
//	
//		//数组元素逆置
//cout<<"请输入五个数字"<<endl;
//int arr[5];
//cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];	
//	int tem;
//	int first=0,end=sizeof(arr)/sizeof(arr[0])-1;
//	cout <<end<<endl;
//	for(;first<end;)
//	{
//		tem=arr[first];
//		arr[first]=arr[end];
//		arr[end]=tem;
//		first++;
//		end--;		
//	}	
//	for(int i=0;i<5;i++)	
//	{
//		cout<<arr[i];				
//	}	
//	
//	
//			//冒泡排序
//	int arr[9]={3,8,0,7,5,9,1,2,4}; 
//	cout<<"排序前：";
//	for(int i=0;i<9;i++)	
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0;i<8;i++)//9个数字，8轮排序 
//	{
//		for(int n=0;n<9-i-1;n++)//每轮的排序次数=9-1-排序轮数 
//		{						//轮数=已经减去的数的数量 
//			if(arr[n]>arr[n+1]) //实质是本轮中的空数(1 空 2 数 3)
//			{     //>是升序，<是降序 
//				int tem=arr[n];  
//				arr[n]=arr[n+1];
//				arr[n+1]=tem;
//			}
//		}
//	}
//	cout<<"排序后：";
//	for(int i=0;i<9;i++)
//	{		
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//
//
//			//二维数组
//	int arr[2][3];//type 1 
//	arr[0][0]	=1;
//	arr[0][1]	=2;
//	arr[0][2]	=3;
//	arr[1][0]	=4;
//	arr[1][1]	=5;
//	arr[1][2]	=6;
//	for(int i=0;i<2;i++)
//	{
//		for(int n=0;n<3;n++)
//		{
//			cout<<arr[i][n]<<" ";
//		}
//		cout<<endl;	
//	}
//
//
//	int arr[2][3]={	//type 2 **********
//	{1,2,3},
//	{4,5,6}};
//for(int i=0;i<2;i++)
//	{
//		for(int n=0;n<3;n++)
//		{
//			cout<<arr[i][n]<<" ";
//		}
//		cout<<endl;	
//	}	
//	
//
//			//二维数组案例
//	int scores[3][3]= {
//	{100,100,100},
//	{100,30,70},
//	{60,70,20}};
//	string names[3]={"学生一","学生二","学生三"};	
//	for(int i=0;i<3;i++)
//	{
//		int sum=0;//必须赋值为0，否则+=操作错误 
//		for(int n=0;n<3;n++)
//		{			
//			sum+=scores[i][n];
//		}
//		cout<<names[i]<<"的成绩为 "<<sum<<endl;		
//	}
//
//
//			//参数调用
//	int a=10,b=20;
//	int sum=add(a,b);//调用sum函数 
//	cout<<"sum="<<sum<<endl;
//	//定义中的num1,num2称为形式参数，形参
//	//调用时的a,b称为实际参数，实参
//	
//	
//	int a=10,b=20;
//	swap(a,b);//值传递时，如果形参发生改变，不会影响实参 
//	cout<<"a= "<<a<<endl;
//	cout<<"b= "<<b<<endl;
//
//
//			//指针
//	int a=10;
//	int *p;//指针定义：数据类型*变量名
//	p=&a;//指针指向变量a的地址 
//	cout<<"p= "<<p<<endl;
//	
//	cout<<"*p= "<<*p<<endl;//通过*p操作显示指针指向的内存
//	cout<<"sizeof(p)= "<<sizeof(p)<<endl;//指针在32位中占4字节，64位中占8字节
//	
//			//const修饰指针
//	int a=10,b=20;
//	const int *p=&a;//常量指针,指针的指向可以修改，指针指向的值不可修改
//	//*p=20; //错误，指针指向的值不可修改 
//	p=&b; //指针的指向可以改
//	 
//	int a=10,b=20;
//	int * const p=&a;//指针常量，指针的指向不可改，指针指向的值可以改
//	*p=20;//正确
//	//p=&b;  //错误
//	 
//	int a=10,b=20;
//	const int *const p=&a;
//	//const即修饰指针也修饰常量，指针的指向和指针指向的值都不可修改
//	
//	 		//利用指针访问数组
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int *p=arr;
//	for(int i=0;i<10;i++)
//	{
//		cout<<*p<<endl;
//		p++	;		
//	}
//	 		//地址传递
//	int a=10,b=20;
//	swap(a,b);//地址传递会改变实参 
//	cout<<"a= "<<a<<endl;
//	cout<<"b= "<<b<<endl;
//	
//	 		//利用指针，函数，数组进行冒泡排序
//	int arr[10]={4,3,6,9,1,2,10,8,7,5};
//	int len=sizeof(arr)/sizeof(arr[0]);
//	bubblesort (arr,len);//放arr进去相当于arr的地址进去 
//	for(int n=0;n<10;n++)
//	{
//		cout<<arr[n]<<endl;
//	}
//
//
//
//			//结构体 
//	//创建方式1
//	student stu1;
//	stu1.name="刘烨通";//通过.访问成员列表 
//	stu1.age=18;
//	stu1.score=535;
//	cout<<stu1.name<<endl<<stu1.age<<endl<<stu1.score<<endl;
//	//创建方式2 
//	student stu2 ={"张三",19,60};
//	cout<<stu2.name<<endl<<stu2.age<<endl<<stu2.score<<endl;
//
//	//结构体数组
//	student arr[3]={
//	{"一",10,100},{"二",30,65,},{"fky",25,70}
//	};
//	cout<<"1. "<<arr[0].name<<" "<<arr[0].age<<" "<<arr[0].score<<endl;
//	cout<<"2. "<<arr[1].name<<" "<<arr[1].age<<" "<<arr[1].score<<endl;
//	cout<<"3. "<<arr[2].name<<" "<<arr[2].age<<" "<<arr[2].score<<endl;
//	arr[2].name = "三";
//	cout<<"3. "<<arr[2].name<<" "<<arr[2].age<<" "<<arr[2].score<<endl;
//
//	
//	//结构体指针
//	student stu={"刘烨通",18,535};
//	student * p=&stu;
//	cout<<"name= "<<p->name<<"name= "<<(*p).name<<endl;//两种方式都可以 
//
//	//结构体嵌套 
//	struct teacher t1;
//	t1.id = 10000;
//	t1.name = "老王";
//	t1.age = 40;
//
//	t1.stu.name = "张三";
//	t1.stu.age = 18;
//	t1.stu.score = 100;
//
//	cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;
//	
//	cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;


			//结构体中的const操作
	student s={"张三",20,100}; 
	printstudent(&s);
		























	
	system ("pause"); 
 	return 0;
 }

