#include<iostream>
using namespace std;
class student {
    private:
    int rollno;
    string name;
    public:
    void input(){
        cout<<"enter roll number:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
    }
        void display()
        {
            cout<<"rollno:"<<rollno<<"\n name:"<<name<<endl;
       }
     };
    int main()
    {
        int i,n;
        cout<<"enter the no of students:";   
        cin>>n;
        student s[100];
        cout<<"enter student details\n";
        for(i=0;i<n;i++){
            cout<<"\n student"<<i+1<<"\n";
            s[i].input();
        }
            cout<<"student information";
            for(i=0;i<n;i++)
            {
            s[i].display();
        }
            return 0;
        }
                  
              
