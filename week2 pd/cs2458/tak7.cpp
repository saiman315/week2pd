#include <iostream>
using namespace std;
int main() {
    
    string movie_name;
    int  adult_ticket, child_ticket, num_adult,num_child,percentage ;
    int total_amt;
    float don_ch; 
    int rem;
    cout << "Enter the Movie name:";
    cin>>movie_name;
    cout << "Enter the Adult ticket price:";
    cin>>adult_ticket;
    cout << "Enter the Child ticket price:";
    cin>>child_ticket;
    cout << "Enter the number of adult tickets sold:";
    cin>>num_adult;
    cout << "Enter the number of child tickets sold:";
    cin>>num_child;
    cout << "Enter the Percentage of the amount to be donated to the charity:";
    cin>>percentage;
    cout<<"----Movie---- :"<<endl<<movie_name<<endl;
    total_amt= (adult_ticket*num_adult)+(child_ticket*num_child);
    cout<<"Total amount generated from the tickets sales :"<<total_amt<<"$"<<endl;
    don_ch=(percentage/100)*total_amt;
    cout<<"Donation To charity :"<<don_ch<<endl;
    rem=total_amt-don_ch;
    cout<<"Remaining Amount:"<<rem;
    return 0;
}