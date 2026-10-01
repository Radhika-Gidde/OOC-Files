#include<iostream>
using namespace std;

class Vehicle
{
public:
Vehicle()
{
	cout<<"This is a vehicle"<<endl;
}
};

class Fare
{
public:
Fare()
{
	cout<<"Fare of vehicle"<<endl;
}
};

class Car:public Vehicle
{
public:
Car()
{
	cout<<"This vehicle is a car"<<endl;
}
};

class Bus:public Fare,public Car
{
public:
Bus()
{
	cout<<"This vehicle is a bus with fare"<<endl;
}
};

int main()
{
Bus obj2;
return 0;
}


