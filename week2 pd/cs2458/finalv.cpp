#include <iostream>
using namespace std ;
main ()
{
int initial_velocity , accerlation, time ,final_velocity ;
cout<<"Enter initial velocity in (m/s) :";
cin>>initial_velocity;
cout<<"Enter the accerlation in (m/s^2) :";
cin>>accerlation;
cout<<"Enter the time :";
cin>>time;
final_velocity= initial_velocity+(accerlation*time);
cout<<"Final velocity in (m/s) is :"<<final_velocity;
}
