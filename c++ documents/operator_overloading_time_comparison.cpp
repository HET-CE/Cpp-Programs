#include<iostream>
#include<conio.h>
using namespace std;
class time
{  private:
    int a,b,c;
   public:
    void setdata(int m,int n, int p)
    {
        a=m; b=n; c=p;
    }
    void showdata()
       {
           cout<<a<<":"<<b<<":"<<c;
       }
       time operator>(time t)
       {
           time temp1,temp2;
           if(a>t.a)
          {
           temp1.a=a;
           temp1.b=b;
           temp1.c=c;
           return(temp1);
          }
          else
          {
           temp2.a=t.a;
           temp2.b=t.b;
           temp2.c=t.c;
           return(temp2);
          }
           if(b>t.b)
          {
           temp1.a=a;
           temp1.b=b;
           temp1.c=c;
           return(temp1);
          }
          else
          {
           temp2.a=t.a;
           temp2.b=t.b;
           temp2.c=t.c;
           return(temp2);
          }
           if(c>t.c)
          {
           temp1.a=a;
           temp1.b=b;
           temp1.c=c;
           return(temp1);
          }
          else
          {
           temp2.a=t.a;
           temp2.b=t.b;
           temp2.c=t.c;
           return(temp2);
          }
       }
};
int main()
{
     int i,j,k,x,y,z;
    time t1,t2,t3;
    cout<<"first enter hour then minutes and last seconds";
     cout<<endl;
      cout<<endl;
    cout<<"enter a time";
    cin>>i>>j>>k;
    t1.setdata(i,j,k);
    cout<<"you entered ";
    t1.showdata();
    cout<<endl;
    cout<<"enter a time";
    cin>>x>>y>>z;
    t2.setdata(x,y,z);
    cout<<"you entered ";
    t2.showdata();
    t3=t2>t1;
    cout<<endl;
    cout<<"the bigger one is ";
    t3.showdata();
    getch();
}
