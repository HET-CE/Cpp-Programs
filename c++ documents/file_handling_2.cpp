#include<conio.h>
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class student
{
   private:
       char name[8];
       int age;
       int rollno;
   public:
       student()
       {
          strcpy(name,"no name");
          age=0;
          rollno=0;
       }
       void getdata()
       {
           cout<<"enter name , age and roll number";
           cin.getline(name,7);
           cin.ignore();
           cin>>age;
           cin>>rollno;
       }
       void showdata()
       {
           cout<<"\n"<<" name is "<<name<<"\n"<<" age "<<age<<"\n"<<" roll number "<<rollno;
       }
       int storestudent()
       {

           if(age==0&&rollno==0)
           {
               cout<<"\n"<<"student data is not initialized";
               return(0);
           }
           else
            { ofstream fout;
           fout.open("fileofstudent.txt",ios::app|ios::binary);
           fout.write((char*)this,sizeof(*this));
           fout.close();
           return(1);
           }
       }
};
int main()
{
    student s1,s2;
    s1.getdata();
    s1.showdata();
    s1.storestudent();
    s2.getdata();
    s2.showdata();
     s2.storestudent();
}
