#include <iostream>
using namespace std;

class A
{
private:
public:
    void hello()
    {
        cout << "Hello World" << endl;
    }
};

int main()
{
    A ob;
    ob.hello();
    
    return 0;
}