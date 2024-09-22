#include <iostream>

using namespace std ;
main ()
{
float days ;
string name; 
float weight_loss;
cout<<"Enter name :";
cin>>name;
cout<<"Enter the target weight loss in kilograms :";
cin>>weight_loss;
days=(weight_loss*15);
cout<<name <<"will need" <<days<<"days to lose" <<weight_loss<<"kg of weight by following doctor's suggestion";
}
