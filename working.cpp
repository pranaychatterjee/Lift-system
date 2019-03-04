#include"number_of_input.h"
#include <queue> 
#include "weight.h"


//funtion prototype
int priority_queue_order(int);


//main funtion starts
int main()
{
int limit;
limit=floor();
priority_queue_order(limit);
return 0;
}
//main funtion ends


int priority_queue_order(int limit)
{
while(1)
{

cout<<"\nenter the avg weight\n";
avg_weight=integer_value<int>();
cout<<"enter the no of person\n";
no_person=integer_value<int>();
cout<<"enter the weight allowed\n";
weight_allowed=integer_value<int>();
bool return_value;
return_value=check_weight();
if(return_value==1)
cout<<"Lift can perform well\n";
else
{
cout<<"lift cannot perform due to over weigth\n";
cout<<"Please move out and release the load\n";

}


priority_queue <int> lift; //queue formation
cout<<"Enter the floor your are in=\n";// enter the values in integer of floor according to user
int on_floor=integer_value<int>();
cout<<"Enter the floor you want to go=\n";// enter the values in integer of floor according to user
int to_floor=integer_value<int>();

//keeping the limits in mind conditions are met
if((on_floor>=0 && on_floor<=limit)&&(to_floor>=0 && to_floor<=limit))
{

if(on_floor==to_floor)//same floor input is ignored
{
cout<<"Enter the valid floor same floor is not allowed\n";
continue;
}


if(on_floor<to_floor)
{
for(int i=on_floor;i<=to_floor;i++)
{
lift.push(i);
}
while (!lift.empty()) 
    { 
        cout << '\n' << lift.top(); 
        lift.pop();
    } 

}


if(to_floor<on_floor)
{
for(int i=to_floor;i>=on_floor;i--)
{
lift.push(i);
}
while (!lift.empty()) 
    { 
        cout << '\n' << lift.top(); 
        lift.pop(); 
    } 
}

}

}
}
