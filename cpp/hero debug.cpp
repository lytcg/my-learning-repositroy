#include <iostream>
#include <string>

using namespace std;

struct hero
{
    string name;
    int age;
    string sex;
};

void bubblesort(hero harr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(harr[j].age>harr[j+1].age)  
            {
                hero tmp=harr[j];
                harr[j]=harr[j+1];
                harr[j+1]=tmp;
            }
        }       
    }
}

void printdata(hero harr[],int len)
{
    for(int n=0;n<len;n++)
    {
        cout<<"name: "<<harr[n].name<<" age: "<<harr[n].age<<" sex: "<<harr[n].sex;
        cout<<endl;
        n++;
    }
}

int main()
{
hero harr[5]={
    {"����",23,"��"},
    {"����",22,"��"},
    {"�ŷ�",20,"��"},
    {"����",21,"��"},
    {"����",19,"Ů"},
};

int len= sizeof(harr)/sizeof(harr[0]);

bubblesort (harr,len);

printdata (harr,len);

system("pause");
}

