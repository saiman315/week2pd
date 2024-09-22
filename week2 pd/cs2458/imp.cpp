#include <iostream>
using namespace std ;
main ()
{
float player_count,imposter_count ;
int imposter;
cout<<"Enter imposter_count :";
cin>>imposter_count;
cout<<"Enter player_count :";
cin>>player_count;
float percent=(imposter_count/player_count);
imposter= 100*percent;
cout<<"chance of being imposter:"<<imposter<<"%";
}
