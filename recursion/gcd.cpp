#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// a > b, if not swap
// if b == 0, return a
// else gcd (b, a mod b)
int gcd(int a, int b){
    if (a<b) swap(&a,&b);

    if(b==0) return a;

    return gcd(b, (a%b));
}

int main(){
    // int res = gcd(105, 224);
    int a, b;
    cout << "enter the first number : " << endl;
    cin >> a;
    cout << "enter the 2nd number : " << endl;
    
    cin >> b;
    int res = gcd(a, b);
    cout << "The highest common factor is : " <<  res << endl;

    return 0;
}