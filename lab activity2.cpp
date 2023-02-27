#include<iostream>
#include<string>
using namespace std;
struct employee
{
    int id;
    char name[50];
    int age;
    float salary;

};
int main()

{  int i,n,display;
    employee e[n];
    
    cout<<" Enter the no of employee "<<endl;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cout<<"Enter employee id "<<endl;
        cin>>e[i].id;
        cout<<"Enter employee name "<<endl;
        cin>>e[i].name;
        cout<<"Enter employee age "<<endl;
        cin>>e[i].age;
        cout<<"Enter employee salary "<<endl;
        cin>>e[i].salary;
    }
    
   cout<<"Enter the id of employee to display it details ";
   cin>>display;
   for(i=0;i<n;i++){
   if (display==e[i].id){
   cout<<"The student no is "<<display<<endl;
   cout<<"The student name is "<<e[i].name<<endl;
   cout<<"The student age "<<e[i].age<<endl;
   cout<<"The student salary is Rs "<<e[i].salary;
   }
   }
}
