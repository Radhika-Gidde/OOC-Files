#include<iostream>
using namespace std;

class Person
{
public:
Person()
{
	cout<<"Persons constructor called"<<endl;
}
};

class Faculty:public Person
{
public:
Faculty()
{
	cout<<"Facultys constructor called"<<endl;
}
};

class Student:public Person
{
public:
Student()
{
	cout<<"Students constructor called"<<endl;
}
};

class TA:public Faculty,public Student
{
public:
TA()
{
	cout<<"TAs constructor called"<<endl;
}
};

int main()
{
TA ta;
return 0;
}

