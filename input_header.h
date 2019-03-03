#include<iostream>
#include<string.h>
#include<exception>
#include<stdlib.h>
using namespace std;

template <typename input>
input integer_value()
{
int value;
cout<<"ENTER ONLY INTEGER\n";
cin>>value;
return value;
}

