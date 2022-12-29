//multi-level inheritance w function overriding
#include <iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<< "in display A"<< endl;
    }
};
class B :public A{
    public:
    void display(){
        cout << "in display B"<<endl;
    }
};
class C:public B{
    public:
    void display(){
        cout<<"in display c"<<endl;
    }
};
int main(){
    C ob;
    ob.A::display();
    ob.B::display();
    ob.display();

    return 0;
}