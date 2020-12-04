#include<conio.h>
#include<iostream>
using namespace std;
 void setdata(int);
 void showdata();
class book
{
   private:
       int a,b;
   public:
       void setdata(int x)
       {
           a=x;
       }
       void showdata()
       {
           cout<<"the data is" <<a;
       }
    book operator++ ()
    {   book temp;
        temp.a=++a;
        return(temp);
    }

};
int main()
{
    book b1,b2,b3;

    b1.setdata(200);
    b1.showdata();
    cout<<endl;
    b2.setdata(300);
    b2.showdata();
    cout<<endl;
    b3=++b2;
    cout<<endl;
    b3.showdata();
}
