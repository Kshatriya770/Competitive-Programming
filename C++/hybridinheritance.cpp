#include<iostream>
using namespace std;
class A{
    protected
    int a;
    void get_a()
    {
        cout<<"Enter a:"<<endl;
        cin>>a;
    }
};
class B {
    protected
    int a;
    void get_a()
    {
        cout<<"Enter a:"<<endl;
        cin>>a;
    }
};
class C{
    protected
    int c;
    public:
    void get_c()
    {
        cout<<"Enter c:"<<endl;
        cin>>c;
    }
};
class D: public B, public C{
    protected
    int d;
    puclic:
    void mul(){
        get_a();
        get_b();
        get_c();
        cout<<"Mulitiplication is: "<<a*b*c<<endl;
    }
    void get_a()
    {
        cout<<"Enter a:"<<endl;
        cin>>a;
    }
};
int main(){
    D d;
    d.mul();

}