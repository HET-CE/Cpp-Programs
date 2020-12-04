#include<conio.h>
#include<iostream>
using namespace std;
class A
{   private:
     int a;
    protected:
    void setd(int x)
    {
        a=x;
    }
     void showd()
     {
         cout<<"the value is passed "<<a;
     }
};
class B: private A
{   public:
    void set_data(int i)
    {
        setd(i);
    }
    void show_data()
    {
        showd();
    }
};
int main()
{
    B b1;
    b1.set_data(4);
    b1.show_data();
    getch();
}
