#include<iostream>
using namespace std;
double getAverage(double num1,double num2){
    return(num1+num2)/2;
}

int main(){
    double avg=getAverage(90.9,12.3);
    cout << "Average:" << avg << endl;
     return 0;

}




