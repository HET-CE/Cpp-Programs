#include<conio.h>
#include<iostream>
using namespace std;
class object_overloading;
void showdata();
void setdata(object_overloading);
object_overloading operator*(object_overloading);
class object_overloading
{  public:
    int a,b;
   public:
       void showdata()
       {
           cout<<"the input is  "<<a;
       }
       void show_data()
       {
           cout<<"the result is "<<a;
       }
       void setdata(int o)
       {
           a=o;
       }
      friend object_overloading operator*(object_overloading);
} ;
 object_overloading operator*(object_overloading o1,object_overloading o2)
      {
          object_overloading j;
          j.a=o1.a*o2.a;
          return(j);
      }



int main()
{
    object_overloading a1,a2,a3;
    a1.setdata(3);
    a1.showdata();
    cout<<endl;
    a2.setdata(4);
    a2.showdata();
    cout<<endl;
    a3=a1*a2;
    a3.show_data();

}
