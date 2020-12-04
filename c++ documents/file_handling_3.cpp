#include<iostream>
#include<conio.h>
#include<stdio.h>
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
        cout<<"\nenter name , age and roll number";
        cin.getline(name,7);
        cin.ignore();
        cin>>age>>rollno;
    }
    void showdata()
    {
        cout<<"\n  name "<<name<<"\n"<<"  age "<<age<<"\n"<<"  roll number "<<rollno;
    }
    int storedata()
    {
       if(rollno==0&&age==0)
       {
           cout<<"\nthe data is not stored in file";
           return(0);
       }
       else
        {
           ofstream fout;
           fout.open("fileofstudent.txt",ios::app|ios::binary);
           fout.write((char*)this,sizeof(*this));
           fout.close();
           return(1);
        }
    }
    void viewalldata()
    {
        ifstream fin;
        fin.open("fileofstudent.txt",ios::in);
        if(!fin)
            cout<<"\nfile not found";
         fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            showdata();
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
    void searchdata(char *n)
    {
        ifstream fin;
        int counter=0;
        fin.open("fileofstudent.txt",ios::in|ios::binary);
        if(!fin)
            cout<<"the fie can not opened";
       else
       {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(!strcmp(n,name))
            {
                showdata();
                counter++;
            }
           fin.read((char*)this,sizeof(*this));
        }
        if(counter==0)
            cout<<"the data can not matched";
       fin.close();
    }
    }
    void deletedata(char *n)
    {
        ifstream fin;
        ofstream fout;
        fin.open("fileofstudent.txt",ios::in|ios::binary);
        if(!fin)
            cout<<"the file not opened";
       else{
            fout.open("tempfile.txt",ios::binary|ios::out);
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
           if(strcmp(name,n))
                 fout.write((char*)this,sizeof(*this));
           fin.read((char*)this,sizeof(*this));
        }
        fin.close();
       fout.close();
       remove("fileofstudent.txt");
    rename("tempfile.txt","fileofstudent.txt");
     }
    }
    void updatedata(char *n)
    {
      fstream file;
      file.open("fileofstudent.txt",ios::ate|ios::binary|ios::in|ios::out);
      file.seekg(0);
      file.read((char*)this,sizeof(*this));
      while(!file.eof())
      {
          if(!strcmp(n,name))
          {
              getdata();
              file.seekp(file.tellp()-sizeof(*this));
              file.write((char*)this,sizeof(*this));
          }
         file.read((char*)this,sizeof(*this));
      }
      file.close();
    }
};
    int menu()
    {
        int choice;
        cout<<"\n1. insert the data";
        cout<<"\n2. view all data";
        cout<<"\n3. search data";
        cout<<"\n4. update data";
        cout<<"\n5. delete data";
        cout<<"\n6. exit";
        cin>>choice;
        return(choice);
    }
int main()
{    student s1;
char name[8];

     while(1)
     {
         system("cls");
     switch(menu())
     {
     case 1:
            s1.getdata();
            s1.storedata();
            cout<<"insert completed";
            break;
     case 2:cout<<"the data is";
              s1.viewalldata();
             break;
     case 3:cout<<"enter the name";
            cin.ignore();
            cin.getline(name,7);
            s1.searchdata(name);
         break;
     case 4:cout<<"enter the name";
            cin.ignore();
            cin.getline(name,7);
            s1.updatedata(name);
            break;

     case 5:cout<<"enter the name";
            cin.ignore();
            cin.getline(name,7);
            s1.deletedata(name);
         break;
     case 6: exit(0);
         break;
         default:cout<<"invalid choice";
     }
     getch();
     }
}
