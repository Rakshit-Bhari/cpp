#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int rollno;
    string dob;
    string branch;
    int marks;
} s1;
int main()
{
    int n, i;
    cout <<"Enter no of student " << endl;
    cin >> n;
    student s1[n];
    for (i = 0; i < n; i++)
    {
        cout <<"Enter student name " << endl;
        cin >> s1[i].name ;
        cout<<"Enter student rollno " <<endl;
        cin>>s1[i].rollno;
        cout<<"Enter student dob "<<endl;
        cin>>s1[i].dob;
        cout<<"Enter student branch "<<endl;
        cin>>s1[i].branch;
        cout<<"Enter student marks "<<endl;
        cin>>s1[i].marks;
        
    }
    for (i = 0; i < n; i++)
    {
        cout <<"Name of student is " << s1[i].name<<endl;
        cout<<"Roll no of student is "<<s1[i].rollno<<endl;
        cout<<"D.O.B of student is "<<s1[i].dob<<endl;
        cout<<"Branch of student is "<<s1[i].branch<<endl;
        cout<<"Marks of student is "<<s1[i].marks<<endl;
        
            
    }
    
}
