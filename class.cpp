#include<iostream>
using namespace std;
class Car{
public:
int Speed;
string brand;
   
 
    void showinfo(){
      cout << "Speed:" << Speed << " km/h" << ", brand:" << brand << endl;
    }
    };
    int main(){
        Car mycar;
        mycar.Speed=200;
        mycar.brand="Benz";

        mycar.showinfo();
        return 0;
    }
