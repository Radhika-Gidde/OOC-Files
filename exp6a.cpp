#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
int roll;
char name[25];
public:
void getdata()
{
cout<<"\n----------------------";
cout<<"\n Enter roll no.   :";
cin>>roll;
cout<<"\n Enter student name   :";
cin>>name;
}
void putdata()
{
cout<<"\n ---------------------";
cout<<"\n **** Student Marklist ****";
cout<<"\n ---------------------";
cout<<"\n Roll no.  :"<<roll;
cout<<"\n Student Name  :"<<name<<endl;
}
};

class StudentExam:public Student
{
public:
int sub1,sub2,sub3,sub4,sub5,sub6;	
float per;
public:
void accept_data()
{
getdata();
cout<<"\n Enter Marks for Subject 1:";
cin>>sub1;
cout<<"\n Enter Marks for Subject 2:";
cin>>sub2;
cout<<"\n Enter Marks for Subject 3:";
cin>>sub3;
cout<<"\n Enter Marks for Subject 4:";
cin>>sub4;
cout<<"\n Enter Marks for Subject 5:";
cin>>sub5;
cout<<"\n Enter Marks for Subject 6:";
cin>>sub6;
}
void display_data()
{
putdata();
cout<<"\n Marks os Subject 1:"<<sub1;
cout<<"\n Marks os Subject 2:"<<sub2;
cout<<"\n Marks os Subject 3:"<<sub3;
cout<<"\n Marks os Subject 4:"<<sub4;
cout<<"\n Marks os Subject 5:"<<sub5;
cout<<"\n Marks os Subject 6:"<<sub6;
}
};

class StudentResult:public StudentExam
{
public:
void calculate()
{
per=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
cout<<"\n\n Total Percentage  :"<<per;
cout<<"\n ---------------------------\n";
}
};

int main()
{
StudentResult str;
int cnt,i;
cout<<"\n Enter no. of Student You Want?:";
cin>>cnt;
for(i=0;i<cnt;i++)
{
str.accept_data();
str.display_data();
str.calculate();
}
return 0;
}



