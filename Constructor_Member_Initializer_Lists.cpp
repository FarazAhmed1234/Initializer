#include<iostream>
using namespace std;

class Test{
    private:
    int a;
    double b;
    char ch;
    const double pi;

// use --------->>>>>> const value Initializer
    public:
    Test(int i, double j, char k , double p):
    a(i),
    b(j),
    ch(k),
    pi(p)
{
    cout<<"Constructor Member Initializer Lists "<<endl;
}

void display(){
    cout<<"A "<<a<<"\nB "<<b<<"\nChar "<<ch<<"\nPi "<<pi;
}
};


int main(){

Test obj(3, 4.1111,'s',3.14);
obj.display();
return 0;
}