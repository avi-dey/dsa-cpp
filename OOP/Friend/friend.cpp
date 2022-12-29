#include <iostream>

class A{
private:
	// char ch[] = "hello world";
public:
	void hello(){
		std::cout<< "hello world" << std::endl;
	}
};
int main(){

	A ob;
	ob.hello();
	std::cout << "hello world"<< std::endl;

	return 0;
}