#include<iostream>
using namespace std;


class chutiya 
{
    int rollno;
    char name[20];
    float marks ;
    char grade;

    public :
    int getRollno()
    {
        return rollno;
    }
    int getMarks()
    {
        return marks;
    }
    int getGrade()
    {
        return grade;
    }

    void setGrade()
    {
        if (marks > 90) grade = 'A';
        else if (marks > 80 ) grade = 'B';
        else if (marks > 70 ) grade = 'C';
        else if (marks > 60 ) grade = 'D';
        else grade = 'E';
    }

};

int main ()
{
    chutiya chokri;
   
   chokri.setGrade() ;

    cout<<"marks bolte "<<chokri.getGrade();


}