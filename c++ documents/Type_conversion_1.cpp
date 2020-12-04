#include<iostream>
#include<conio.h>
using namespace std;
class complex
{   private:
     int a,b,k;
 public:
     complex(){}
     complex(int k)
     {
         a=k;
     }
     void setdata(int x,int y=0)
     {
         a=k; b=y;
     }
    void showdata()
    {
        cout<<"a is "<<a<<endl<<"b is "<<b;
    }

};
int main()
{
    complex c1;
    int x=5;
    c1=x;
    c1.showdata();
    getch();
}
