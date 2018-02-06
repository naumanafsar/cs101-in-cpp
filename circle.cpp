#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int i, pi = 3.14,r,area,rad, out_par; //Necessary variables
void get_area();                     //Declaring functions
void output_par();

void menu()
{
  string opt[3] = {"1. Get Area","2. Output Parameter","3. Exit"};
  cout<<opt[0]<<endl<<opt[1]<<endl<<opt[2]<<endl<<"Enter Choice: ";
  cin>>i;
  if(i==1) get_area();
  if(i==2) output_par();
}

void get_area()
{
  cout<<"Please Enter radius: ";
  cin>>r;
  area = pi * r * 2;
  cout<<"The area of the circle with radius "<<r<<" is "<<area<<endl;
}

void output_par()
{
  cout<<"Please Enter the radius: ";
  cin>>rad;
  out_par = pow(rad,2)*pi;
  cout<<"The parameter of the circle with radius "<<rad<<" is "<<out_par<<endl;
}
int main()
{
  menu();
  return 0;
}
