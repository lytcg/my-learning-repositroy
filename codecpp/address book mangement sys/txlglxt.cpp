#include <iostream>
#include <string>
#define max 1000
using namespace std;

struct person
{
    string name;
    int sex;
    int age;
    string phone;
    string address;
};

struct addressbook
{
    person parr[max];
    int size=0;
};

int isexist(addressbook*abs,string name)
{
    for(int i=0;i<abs->size;i++)
    {
        if (name==abs->parr[i].name)
        {
            return i;
        }
    }
    return -1;
}

void showmenu ()
{
    cout<<"**************************"<<endl;
    cout<<"*****  1.添加联系人  *****"<<endl;
    cout<<"*****  2.显示联系人  *****"<<endl;
    cout<<"*****  3.删除联系人  *****"<<endl;
    cout<<"*****  4.查找联系人  *****"<<endl;
    cout<<"*****  5.修改联系人  *****"<<endl;
    cout<<"*****  6.清空联系人  *****"<<endl;
    cout<<"*****  0.退出通讯录  *****"<<endl;
    cout<<"**************************"<<endl;
}

void addperson(addressbook *abs)
{   
    
    if(abs->size+1==max)
    {
        cout<<"联系人已满,无法添加"<<endl;
        return;
    }
    else
    {
        string name;
        cout<<"请输入姓名: "<<endl;
        cin>>name;
        abs->parr[abs->size].name=name;

        int sex;
        cout<<"请输入性别: "<<endl;
        cout<<"1--男"<<endl;
        cout<<"2--女"<<endl;

        while(1)
        {   cin>>sex;
            if(sex==1||sex==2)
            {
                abs->parr[abs->size].sex=sex;
                break;
            }
            else
            {
                cout<<"请正确输入性别"<<endl;
            }
        }
        
        int age;
        cout<<"请输入年龄: "<<endl;
        cin>>age;
        abs->parr[abs->size].age=age;

        string phone;
        cout<<"请输入电话号码: "<<endl;
        cin>>phone;
        abs->parr[abs->size].phone=phone;

        string address;
        cout<<"请输入地址: "<<endl;
        cin>>address;
        abs->parr[abs->size].address=address;
        cout<<"*****添加成功*****"<<endl;

        abs->size++;
        system("pause");
        system("cls");
    }
}

void showperson(addressbook *abs)
{
    if(abs->size==0)
    {
        cout<<"当前无联系人"<<endl;
    }
    else
    {
        for(int i=0;i<abs->size;i++)
        {   
            cout<<"联系人"<<i+1<<endl;
            cout<<"姓名： "<<abs->parr[i].name<<"\t";
            cout<<"姓别： "<<abs->parr[i].sex<<"\t";
            cout<<"年龄： "<<abs->parr[i].age<<"\t";
            cout<<"电话号码： "<<abs->parr[i].phone<<"\t";
            cout<<"地址： "<<abs->parr[i].address<<endl;
        }
    }
    system("pause");
    system("cls");
}

void deletepeople(addressbook *abs)
{
    cout<<"请输入要删除的联系人"<<endl;
    string name;
    cin>>name;
    int ret=isexist (abs,name);//此处的abs是delete函数中的*abs
    if (ret==-1)
    {
        cout<<"查无此人"<<endl;
    }
    else
    {
        for(int i=ret;i< abs->size;i++)
        {
            abs->parr[i]=abs->parr[i+1];
            abs->size--;
            cout<<"*****删除成功*****"<<endl;            
        }
    }
    system("pause");
    system("cls");
    }

void findpeople(addressbook *abs)
    {
        string name;
        cout<<"请输入姓名"<<endl;
        cin>>name;
        int ret= isexist(abs,name);
        if(ret==-1)
        {
            cout<<"查无此人"<<endl;
        }
        else
        {
            cout<<"姓名： "<<abs->parr[ret].name<<"\t";
            cout<<"姓别： "<<abs->parr[ret].sex<<"\t";
            cout<<"年龄： "<<abs->parr[ret].age<<"\t";
            cout<<"电话号码： "<<abs->parr[ret].phone<<"\t";
            cout<<"地址： "<<abs->parr[ret].address<<endl;
        }
        system("pause");
        system("cls");
    }

void readd(addressbook *abs)
{
    string name;
    cout<<"请输入姓名: "<<endl;
    cin>>name;
    int ret=isexist(abs,name);
    if(ret==-1)
    {
        cout<<"查无此人"<<endl;
    }
    else
    {
        cout<<"请重新输入姓名: "<<endl;
        cin>>abs->parr[ret].name;
        cout<<"请重新输入性别: "<<endl;
        cin>>abs->parr[ret].sex;
        cout<<"请重新输入年龄: "<<endl;
        cin>>abs->parr[ret].age;
        cout<<"请重新输入电话号码: "<<endl;
        cin>>abs->parr[ret].phone;
        cout<<"请重新输入地址: "<<endl;
        cin>>abs->parr[ret].address;
        cout<<"*****修改成功*****"<<endl;
    }
    system("pause");
    system("cls");
}

void clear(addressbook *abs)
{   cout<<"*********警告!*********"<<endl;
    cout<<"*********警告!*********"<<endl;
    cout<<"通讯录一旦清空将无法恢复!"<<endl;
    cout<<"请输入 1 确认清空通讯录"<<endl;
    int n;
    cin>>n;
    if (n==1)
    {
        abs->size=0;
        cout<<"*****通讯录已清空*****";
    }
    else
    {
        cout<<"取消删除"<<endl;
    }

    system("pause");
    system("cls");
}

int main()
{   
    addressbook abs;
    abs.size=0;

    while(1)
    {   
        showmenu ();
        int select;
        cin>>select;
        switch(select)
        {
            case 1:
                addperson (&abs);
                break;
            case 2:
                showperson(&abs);
                break;
            case 3:
                deletepeople(&abs);
                break;
            case 4:
                findpeople(&abs);
                break;
            case 5:
                readd(&abs);
                break;
            case 6:
                clear(&abs);
                break;
            case 0:
                cout<<"欢迎下次使用"<<endl;
                system("pause");
                return 0;
                break;
            default:
                break;
        }
    }

    system("pause");
    return 0;
}