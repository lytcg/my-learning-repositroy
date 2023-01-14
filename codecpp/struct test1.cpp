#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
using namespace std;

struct student
{
	string sname;
	int score;
};

struct teacher
{
	string tname;
	student sarr[5];	
};

void allocatespace (teacher tarr[],int len)
{
	string nameseed="ABCDE";
	for(int i=0;i<len;i++)
	{
		tarr[i].tname="teacher_";
		tarr[i].tname+=nameseed[i];		
		for(int j=0;j<5;j++)
		{
			tarr[i].sarr[j].sname="student_";
			tarr[i].sarr[j].sname+=nameseed[j];
			tarr[i].sarr[j].score=rand()%61+40;			
		}		
	}	
}

void printt(teacher tarr[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<tarr[i].tname<<endl;
		for(int j=0;j<5;j++)
		{
			cout<<"\tstudent name: "<<tarr[i].sarr[j].sname<<" score "<<tarr[i].sarr[j].score<<endl;
		}
	}		
}

int main()
{
	teacher tarr[3];
	int len=sizeof(tarr)/sizeof(tarr[0]);

	allocatespace (tarr,len);
		
	printt(tarr,len);
		
	system("pause");
	return 0;
} 