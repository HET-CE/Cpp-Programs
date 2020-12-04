#include<iostream>
#include<conio.h>
using namespace std;
 void setdata(int,int);
  void showdata();
class complex
{   private:
     int a,b;
    public:
      void setdata(int i,int j)
      {
         a=i; b=j;
      }
      void showdata()
      {
          cout<<"the data is "<<a<<" "<<b;
      }
      complex operator+ (complex c)
      {
        complex temp;
          temp.a = a+c.a;
          temp.b = b+c.b;
          return(temp);
      }
};
int main()
{
     complex x1,x2,x3;

         x1.setdata(3,4);
         x1.showdata();
         cout<<endl;
         x2.setdata(6,7);
         x2.showdata();
         cout<<endl;
         x3=x1+x2;
         x3.showdata();
         getch();
}

