#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void storedata(char *f1)
{   char ch='j';
    ifstream fin;
    fin.open(f1,ios::app);
    fin.insert("hello");
    fin.close();
}
int main()
{
    storedata("file");
    cout<<"work complete";
    getch();

}
