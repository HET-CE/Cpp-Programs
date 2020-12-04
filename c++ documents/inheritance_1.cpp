#include<conio.h>
#include<iostream>
using namespace std;
class car
{  protected:
    int price,engine,fuel;
  /* protected:
       void setdata(int p,int f,int e)                            this comments is not required.
       {
           price=p;
           fuel=f;
           engine=e;
       }
       void showdata()
       {
           cout<<"price="<<price<<endl<<"fuel="<<fuel<<endl<<"engine="<<engine;
       }*/
};
class sportscar: private car
{
    public:
     void set_data(int p,int f,int e)
       {
           price=p;
           fuel=f;
           engine=e;
       }
    void show_data()
    {
            cout<<"price="<<price<<endl<<"fuel="<<fuel<<endl<<"engine="<<engine;
    }
};
int main()
{
    class sportscar s1;
    s1.set_data(2000,1,4);
    s1.show_data();
}
