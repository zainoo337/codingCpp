#include<iostream>
using namespace std;
void myStack(){
   int data[20];
   int count = 0;
}
void push(obj){
    if count < 20
    data[count]=obj
    count++;
    else:
    cout << "array is full" << endl;
}
int pop(){
    if count == 0
    cout << "Empty" << endl;
    else:
    count--;
    return data[count]
}
int size(){
    return count
}
void isEmpty(){
    return count == 0
}
int main(){
    int i = 0;
    while i < 5{
        if i == 1
        cout << pop() << endl;
        else if (i == 2)
        {
           cout << size() << endl;
        }
        else if (i == 3)
        {
            cout << isEmpty() << endl;
        }
        else(i == 4) 
        {
            cout << push(obj) << endl;
        }
        
    }
    
}