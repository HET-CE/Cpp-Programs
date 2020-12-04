
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"enter a year";
    int a;
    cin>>a;
        if(a%100==0)
        {
             if(a%400==0)
                cout<<"leap year";
             else
                cout<<"not leap year";
        }
        else
        {
            if(a%4==0)
                cout<<"leap year";
            else
                cout<<"not leap year";
        }
        getch();

}
