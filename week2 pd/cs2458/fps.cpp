#include <iostream>
using namespace std ;
main ()
{
int minutes , fps, total_fps ;
cout<<"Enter number of minutes :";
cin>>minutes;
cout<<"Enter the number of Frames Per Seconds :";
cin>>fps;
total_fps= (minutes*60)*fps;
cout<<"Total number of frame per second is :"<<total_fps;
}
