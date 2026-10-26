#include<iostream>
using namespace std;

template <class T>
T add(T a,T b) 
{
  return a+b;
};
int main() 
{
cout<<"sum of integers:"<<add(5,10)<< endl;
cout<<"sum of floats:"<< add(5.1,5.10)<< endl;
cout<<"sum of characters:"<<add('A','B')<< endl; 
return 0;
}
