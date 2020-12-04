#include<iostream>
#include<conio.h>
using namespace std;
void setTime(int,int,int);
void showTime();
class Time
{
    private:
      int HR,MIN,SEC;
    public:
void setTime(int h,int m,int s)
    {
       HR=h; MIN=m; SEC=s;
    }
void showTime()
    {
        cout<<HR<<":"<<MIN<<":"<<SEC;
    }
};
int main()
{
    Time a1;
    int x,y,z;
    cout<<"enter three values";
    cin>>x>>y>>z;
    a1.setTime(x,y,z);
    a1.showTime();
    getch();
}
