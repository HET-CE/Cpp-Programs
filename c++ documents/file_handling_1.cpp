#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void filecopy(char *f1,char *f2)
{
    ifstream fin;
    ofstream fout;
    fin.open(f1);
    fout.open(f2);
    char ch=fin.get();
    while(!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    fin.close();
    fout.close();
}
int main()
{
    filecopy("file.txt","copyfile.txt");
    cout<<"work is complete";
    getch();
}
