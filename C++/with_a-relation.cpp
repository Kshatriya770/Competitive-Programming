#include<iostream>
using namespace std;
class Address{
    public:
    string addressLine, city, state;
    Address(string addressLine, string city, string state){
        this->addressLine = addressLine;
        this->city = city;
        this->state = state;
    }
};
class Employee{
    private:
    Address* saurabh;
    public:
    int id;
    string name;
    Employee(int id, string name,Address* saurabh){
        this->id=id;
        this->name = name;
        this->saurabh = saurabh;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<saurabh->addressLine<<" "<<saurabh->city<<" "<<saurabh->state<<endl;
    }
};
int main(){
    Address a1 = Address("C-146, Sec-17", "Noida","U.P.");
    Employee e1 = Employee(100, "Deep",&a1);
    e1.display();
    return 0;
}