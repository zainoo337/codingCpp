#include<iostream>
using namespace std;
void sum()
{
    int Number1,Number2;
    cout<<"Enter First Number"<<endl;
    cin >> Number1;
    cout<<"Enter Second Number"<<endl;
    cin >> Number2;
    int add = Number1+Number2;
    cout<< add<<endl;
}
void sub(){
    int Number1,Number2;
    cout<<"Enter First Number"<<endl;
    cin >> Number1;
    cout<<"Enter Second Number"<<endl;
    cin >> Number2;
    int sub = Number1-Number2;
    cout<< sub<<endl;
}
void multiplication(){
    int Number1,Number2;
    cout<<"Enter First Number"<<endl;
    cin >> Number1;
    cout<<"Enter Second Number"<<endl;
    cin >> Number2;
    int multiply = Number1*Number2;
    cout<< multiply<<endl;
}
void Division(){
    int Number1,Number2;
    cout<<"Enter First Number"<<endl;
    cin >> Number1;
    cout<<"Enter Second Number"<<endl;
    cin >> Number2;
    int Division = Number1/Number2;
    cout<< Division<<endl;
}
int main()
{
int n;
cout<<"Press 1 for addition"<<endl;
cout<<"Press 2 for subtraction"<<endl;
cout<<"Press 3 for multiplication"<<endl;
cout<<"Press 4 for division"<<endl;
cin >> n;
if (n==1)
  sum();
else if(n==2)
    sub();
else if(n==3)
    multiplication();
else (n==4);
    Division();
}