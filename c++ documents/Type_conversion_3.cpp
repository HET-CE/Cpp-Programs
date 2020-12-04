#include<iostream>
#include<conio.h>
using namespace std;
class dummy
 {
private:
    int a,b,*p;
public:
    dummy(){}
    dummy(dummy &d)
    {
        a=d.a;
        b=d.b;
        p=new int;
        *p=*(d.p);
    }
    setdata(int x,int y,int z)
    {
        a=x; b=y; *p=z;
    }
    void showdata()
    {
        cout<<"a is "<<a<<"b is "<<b;
    }
    ~dummy()
    {
        delete p;
    }
};
int main()
{
    dummy d1;
    d1.setdata(3,4,5);
    dummy d2=d1;
    d2.showdata();

}
