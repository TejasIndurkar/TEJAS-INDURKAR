#include <iostream>
using namespace std;

class student
{
    public:
    char rollno[10],name[10];
    float cgpa;
    void getdata()
    {
        cout<<"\n 1.Enter the roll no";
        cin>>rollno;
        cout<<"\n 2.Enter the name";
        cin>>name;
        cout<<"\n 3. Enter the CGPA";
        cin>>cgpa;

    }
      void display()
      {
          cout<<"\n 1.Rollno"<<rollno;
          cout<<"\n 2.Name:"<<name;
          cout<<"\n 3.CGPA:"<<cgpa;
      }


};
class marks:public student
{
    float per;
    public:
    void percentage()
    {
        per=(cgpa-0.75)*10;
        cout<<"\n Enter the percentage:"<<per;


    }
};
int main ()
{
    marks M;
    M.getdata();
    M.display();
    M.percentage();
    return 0;
}

