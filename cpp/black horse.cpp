#include <iostream>
#include <string> //����string�����ַ��� 
#include <stdlib.h>//α����� 
#include <ctime>// ʱ������� 
using namespace std;

			//����
//int add(int num1,int num2) 
//{
//	int sum=num1+num2;	
//	return sum;	
//}	
/*
  ����ֵ���� ������ (�����б�)
  {
  ���������
  
  return���ʽ 
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
//void swap(int num1,int num2)//void����дreturn 
//{
//	cout<<"����ǰ"<<endl<<"num1= "<<num1<<endl;   	
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

struct student//�ṹ�嶨��  ѧ�� 
{
	string name;
	int age;
	int score;
};
//struct teacher
//{
//    //��Ա�б�
//	int id; //ְ�����
//	string name;  //��ʦ����
//	int age;   //��ʦ����
//	struct student stu; //�ӽṹ�� ѧ��
//};

void printstudent (const student *stu)//��const��ֹ�������е������
{
	//stu->age=100;//����ʧ�ܣ���Ϊ����const����
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;
}






int main()
 {
// 			//�ַ����� 
// 	char zifu='n';//char���嵥�ַ��� 
// 	cout<<"�ַ����ڴ�ռ�ã�"<<sizeof (char)<< endl;
// 	cout<<zifu<<endl;
// 	cout<<(int)zifu<<endl;//��ʾzifu�����������ASCII 
//	
//	char str1[]="hello world";//���峤�ַ���������ǰ��[]���ַ����á��� 
//	cout<< str1<<endl; 
//	string str2="hello world";//��ʽ2����ͷ�ļ� 
//	cout<< str2<<endl;
//	
//	 	  	//�����ȸ����� 
// 	float num1=3.14f;//float����С�����f������Ĭ��double  
// 	cout<< num1<<endl;

// 			//���峣�� 
// 	#define constant1 100//���峣��1//��������ʹ��define����Ӧ�����ں����� 
// 	cout<< constant1<<endl//cuo;wu//���뱨��ԭ��δ֪*����֪ 
//	cout<<constant1;//ԭ��define�󲻼ӡ����� 
//	cout<<endl; //endl���к��ޱ��� 
// 	const int constant2=101;//���峣��2 
// 	cout<<constant2<<endl;
// 	
// 			 //ת���ַ� 
// 	cout<<"hello world\n";//\n,c�����л��У���endl������ͬ��λ�ò�ͬ 
//	cout<<"\\"<<endl; //\�������ַ�������\���һ��\.
//	cout<<"aaa\thello world"<<endl; //��ȫ8���ַ����������� 

//			//bool�Ͷ��� 
//	bool flag1=true;//boolֻ������ֵ��0=f��������=t 
//	cout<<flag1<<endl;    
//	bool flag2=false;
//	cout<<flag2<<endl; 
//	cout<<"bool������ռ�ֽڴ�СΪ"<<sizeof(bool)<<endl; 

//			//����ʵ�� 
//	int ci;
//	cout<<"������ci��ֵ"<<endl;//cin���÷� 
//	cin>>ci;
//	cout<<"ci��ֵΪ"<<ci; 
//	
//	char cha='c';
//	cout<<"����ַ���cha��ֵ"<<endl; 
//	cin>>cha;//����ֵ����������ֻ��ʾ��һ���ַ�����erd��ʾe 
//	cout<<"�ַ��ͱ���cha��ֵΪ" <<cha<<endl; 

//			//����
//	int a1=10;
//	int b1=3;
//	double c1=a1/b1; 
//	cout<< c1<<endl;//���Ϊ3����Ϊa1,b1������ 
//	
//	cout<<a1%b1<<endl;//ȡ���� (����С��������ȡģ����) 
	
//	int a2=10;//ǰ�õ����ȶԱ���+1���ټ�����ʽ 
//	int b2=++a2*10;
//	cout<<"a2��ֵΪ"<<a2<<endl<<"b2��ֵΪ"<<b2<<endl;
//	
//	int a3=10;//���õ����ȼ�����ʽ���ٶԱ���+1
//	int b3=a3++*10;
//	cout<<"a3��ֵΪ"<<a3<<endl<<"b3��ֵΪ"<<b3<<endl;
	
//	int a=10;
//	a+=2;//��a=a+2 
//	cout<<"a="<<a<<endl;
//	 
//	a=10;
//	a-=2;//��a=a-2
//	cout<<"a="<<a<<endl;
//	//a*=2,a/=2,a%=2��ͬ��*
	 
//	int a=10,b=20;
//	cout<<(a==b)<<endl;//()�е��������㡣
//	cout<<(a!=b)<<endl;//������1������0
//	cout<<(a>=b)<<endl;
//	cout<<(a<=b)<<endl; 
	
			//�߼����� 
//	int a=10;//��! 
//	cout<<!a<<endl;//0����٣������������� 
//	cout<<!!a<<endl;
	 
//	int a=10,b=19;//��&& 
//	cout<<(a&&b)<<endl;
//	a=0;
//	cout<<(a&&b)<<endl;
	
//	int a=10,b=19;//��|| 
//	cout<<(a||b)<<endl;
//	a=0;
//	cout<<(a||b)<<endl;		
//	b=0;
//	cout<<(a||b)<<endl;
//	
//			//if�����ж�
//	int score;
//	cout<<"���������ķ�����"<<endl;
//	cin>>score;
//	cout<<"���ķ���Ϊ��"<<score<<endl;
//	if (score>535)//ע�⣬if�����󲻼ӷֺ�
//		{
//			cout<<"��ϲ�����ɼ�����lyt"<<endl; 
//		}		 
//	else if(score==535)	
//		{
//			cout<<"�ɼ���lyt��ͬ"<<endl;
//		}
//	else if(score<535)	
//	    {
//	    	cout<<"�ɼ�����lyt"<<endl;
//		}
//
//			//��Ŀ�����
//	int a=10,b=20,c;//��if else Ч����ͬ 
//	c=(a>b?a:b);//?ǰ���ж����������������?and:�м�ģ����������:��� 
//	cout<<"c��ֵΪ"<<c<<endl;//c=20
//	(a>b?a:b)=1000;
//	cout<<"a��ֵΪ"<<a<<endl;
//	cout<<"b��ֵΪ"<<b<<endl;//��ʱbΪ1000 
//	
//			//switch��� 
//	int score;
//	cout<<"�������������(1-10)"<<endl;
//	cin>>score;//endl;
//	cout<<"���������"<<score<<endl;
//	switch(score) //���ʽֻ��˵���λ��ַ��� 
//	{
//		//case >10://�����жϣ��ᱨ��
//			//cout<<"�в�"<<endl;
//			//break;
//		//case��ѡ����ڣ��������break������ִ�н���������cout						
//		case 10: 
//			cout<<"����Ϊ��Ӱ������" <<endl;
//			break;
//		case 9:
//			cout<<"����Ϊ��Ӱ��9��" <<endl;
//			break;
//		case 8:
//			cout<<"����Ϊ��Ӱ��8��" <<endl;
//			break;
//		case 7:
//			cout<<"����Ϊ��Ӱ��7��"<<endl;
//			break;
//		case (5||6)://����ʹ��||������Ҫ������ 
//			cout<<"����Ϊ��Ӱ��5/6��"<<endl;
//			break;
//		default:
//			cout<<"����õ�Ӱ����"	<<endl;
//			break;			
//	}		
	
			//ѭ���ṹ
//	int num=0;
//	while (num<10)
//	{
//		cout<<"num="<<num<<endl;
//		num++;			
//	}
//
//			//������С��Ϸ 
//	srand((unsigned int)time(NULL));//���ctimeͷ�ļ���ʱ�������
//	int num=rand()%100+1;//randα�������Ҫ<stdlib.h>ͷ�ļ� 	
//	int val;
//	cout<<"������1-100�����������һ�����֣������������Ƕ���" <<endl; 
//	cout<<"��������µ�����" ;
//	while(1)//1Ϊ�棬��ѭ��
//	{   
//		cin>>val;
//		if (num>val)
//		{
//			cout<<"���ֹ�С"<<endl<<"�������������" ; 
//		}
//		else if(num<val)
//		{
//			cout<<"���ֹ���"<<endl<<"�������������" ;
//		}
//		else
//		{
//			cout<<"��ϲ���¶���"<<endl;
//			break;
//		} 	
//	} 
//		
//			//Ƕ��ѭ��
//	for(int i=0;i<15;i++)
//	{
//		for(int n=0;n<10;n++)
//		{
//			cout<<"* ";
//		}
//		cout<<endl;	
//	} 
//		
//			//��ת��䣬break continue goto 
//	for(int a=0;a<20;a++)
//	{
//		if(a%2==0)	
//		{
//			continue;//continue����ʣ�ಽ�裬ִ���´�ѭ�� 
//		}			 //break������ǰѭ�� 
//		cout<<a<<endl;		
//	}				
//				
//
//	cout<<"11111"<<endl;
//	goto FLAG;//������ 
//	cout<<"22222"<<endl;	
//	cout<<"33333"<<endl;	
//	cout<<"44444"<<endl;	
//	FLAG:	
//	cout<<"55555"<<endl;	
//		
//		
//			//һά����
//	//1.�������� ������[���鳤��];
//	cout<<"������arr1[0]��ֵ"<<endl;//�����һ����arr[0] 
//	int arr[10];
//	cin>>arr[0];
//	cout<<endl<<"arr[0]��ֵΪ"<<arr[0]<<endl;	
//	//2.�������� ������[���鳤��]={ֵ1��ֵ2��......};
//	int arr2[10]={1,2,3,4,5,6,7,8,9};//����һ�����Զ���0	
//	for(int i=0;i<10;i++)
//	{
//		cout<<arr2[i]<<endl;
//	}
//	//3.�������� ������[]={ֵ1��ֵ2��......};
//		int arr3[]={9,8,7,6,5,4,3,2,1};//�������9��ֵ 
//		for(int i=0;i<10;i++)//�����arr[10]��Ϊ0 
//	{
//		cout<<arr3[i]<<endl;
//	}
//	//ע��1.�������������淶�����һ�£����ܺͱ�������
//	//    2.�������±��Ǵ�0��ʼ���� 
//		
//	//����ͨ��������ͳ����������ռ���ڴ��С
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	cout<<"��������ռ���ڴ�Ϊ"<<sizeof(arr)<<endl;	
//	cout<<"ÿ��Ԫ��ռ���ڴ�Ϊ"<<sizeof(arr[1])<<endl;
//	cout<<"������Ԫ�ظ���Ϊ"<<sizeof(arr)/sizeof(arr[1])<<endl;
//	
//	//����ͨ���������鿴�����׵�ַ
//	cout<<"�����׵�ַΪ"<<arr<<endl;
//	cout<<"�����׵�ַ(ʮ����)Ϊ"<<(long long)arr<<endl;//longlongǿ��16ת10  
//	cout<<"�����е�һ��Ԫ�صĵ�ַΪ"<<&arr[0]<<endl;//&ȡַ���� 
//	
//		//����Ԫ������
//cout<<"�������������"<<endl;
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
//			//ð������
//	int arr[9]={3,8,0,7,5,9,1,2,4}; 
//	cout<<"����ǰ��";
//	for(int i=0;i<9;i++)	
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0;i<8;i++)//9�����֣�8������ 
//	{
//		for(int n=0;n<9-i-1;n++)//ÿ�ֵ��������=9-1-�������� 
//		{						//����=�Ѿ���ȥ���������� 
//			if(arr[n]>arr[n+1]) //ʵ���Ǳ����еĿ���(1 �� 2 �� 3)
//			{     //>������<�ǽ��� 
//				int tem=arr[n];  
//				arr[n]=arr[n+1];
//				arr[n+1]=tem;
//			}
//		}
//	}
//	cout<<"�����";
//	for(int i=0;i<9;i++)
//	{		
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//
//
//			//��ά����
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
//			//��ά���鰸��
//	int scores[3][3]= {
//	{100,100,100},
//	{100,30,70},
//	{60,70,20}};
//	string names[3]={"ѧ��һ","ѧ����","ѧ����"};	
//	for(int i=0;i<3;i++)
//	{
//		int sum=0;//���븳ֵΪ0������+=�������� 
//		for(int n=0;n<3;n++)
//		{			
//			sum+=scores[i][n];
//		}
//		cout<<names[i]<<"�ĳɼ�Ϊ "<<sum<<endl;		
//	}
//
//
//			//��������
//	int a=10,b=20;
//	int sum=add(a,b);//����sum���� 
//	cout<<"sum="<<sum<<endl;
//	//�����е�num1,num2��Ϊ��ʽ�������β�
//	//����ʱ��a,b��Ϊʵ�ʲ�����ʵ��
//	
//	
//	int a=10,b=20;
//	swap(a,b);//ֵ����ʱ������βη����ı䣬����Ӱ��ʵ�� 
//	cout<<"a= "<<a<<endl;
//	cout<<"b= "<<b<<endl;
//
//
//			//ָ��
//	int a=10;
//	int *p;//ָ�붨�壺��������*������
//	p=&a;//ָ��ָ�����a�ĵ�ַ 
//	cout<<"p= "<<p<<endl;
//	
//	cout<<"*p= "<<*p<<endl;//ͨ��*p������ʾָ��ָ����ڴ�
//	cout<<"sizeof(p)= "<<sizeof(p)<<endl;//ָ����32λ��ռ4�ֽڣ�64λ��ռ8�ֽ�
//	
//			//const����ָ��
//	int a=10,b=20;
//	const int *p=&a;//����ָ��,ָ���ָ������޸ģ�ָ��ָ���ֵ�����޸�
//	//*p=20; //����ָ��ָ���ֵ�����޸� 
//	p=&b; //ָ���ָ����Ը�
//	 
//	int a=10,b=20;
//	int * const p=&a;//ָ�볣����ָ���ָ�򲻿ɸģ�ָ��ָ���ֵ���Ը�
//	*p=20;//��ȷ
//	//p=&b;  //����
//	 
//	int a=10,b=20;
//	const int *const p=&a;
//	//const������ָ��Ҳ���γ�����ָ���ָ���ָ��ָ���ֵ�������޸�
//	
//	 		//����ָ���������
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int *p=arr;
//	for(int i=0;i<10;i++)
//	{
//		cout<<*p<<endl;
//		p++	;		
//	}
//	 		//��ַ����
//	int a=10,b=20;
//	swap(a,b);//��ַ���ݻ�ı�ʵ�� 
//	cout<<"a= "<<a<<endl;
//	cout<<"b= "<<b<<endl;
//	
//	 		//����ָ�룬�������������ð������
//	int arr[10]={4,3,6,9,1,2,10,8,7,5};
//	int len=sizeof(arr)/sizeof(arr[0]);
//	bubblesort (arr,len);//��arr��ȥ�൱��arr�ĵ�ַ��ȥ 
//	for(int n=0;n<10;n++)
//	{
//		cout<<arr[n]<<endl;
//	}
//
//
//
//			//�ṹ�� 
//	//������ʽ1
//	student stu1;
//	stu1.name="����ͨ";//ͨ��.���ʳ�Ա�б� 
//	stu1.age=18;
//	stu1.score=535;
//	cout<<stu1.name<<endl<<stu1.age<<endl<<stu1.score<<endl;
//	//������ʽ2 
//	student stu2 ={"����",19,60};
//	cout<<stu2.name<<endl<<stu2.age<<endl<<stu2.score<<endl;
//
//	//�ṹ������
//	student arr[3]={
//	{"һ",10,100},{"��",30,65,},{"fky",25,70}
//	};
//	cout<<"1. "<<arr[0].name<<" "<<arr[0].age<<" "<<arr[0].score<<endl;
//	cout<<"2. "<<arr[1].name<<" "<<arr[1].age<<" "<<arr[1].score<<endl;
//	cout<<"3. "<<arr[2].name<<" "<<arr[2].age<<" "<<arr[2].score<<endl;
//	arr[2].name = "��";
//	cout<<"3. "<<arr[2].name<<" "<<arr[2].age<<" "<<arr[2].score<<endl;
//
//	
//	//�ṹ��ָ��
//	student stu={"����ͨ",18,535};
//	student * p=&stu;
//	cout<<"name= "<<p->name<<"name= "<<(*p).name<<endl;//���ַ�ʽ������ 
//
//	//�ṹ��Ƕ�� 
//	struct teacher t1;
//	t1.id = 10000;
//	t1.name = "����";
//	t1.age = 40;
//
//	t1.stu.name = "����";
//	t1.stu.age = 18;
//	t1.stu.score = 100;
//
//	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;
//	
//	cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;


			//�ṹ���е�const����
	student s={"����",20,100}; 
	printstudent(&s);
		























	
	system ("pause"); 
 	return 0;
 }

