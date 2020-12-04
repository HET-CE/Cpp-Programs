#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
     operator int ()
    {
        return(a);
    }
    void setdata(int x,int y)
    {
        a=x; b=y;
    }
    void showdata()
    {
        cout<<"a is "<<a;
    }
};
int main()
{
    complex c1;
    int x=5;
    c1.setdata(3,4);
    x=c1;
    c1.showdata();
    getch();
}
