#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int rollno;
    float mark;
    public:
    void inputdata(){
        cout<<"name:";
        cin>>name;
        cout<<"rollno:";
        cin>>rollno;
        cout<<"marks:";
        cin>>mark;}

        void displaydata(){
        cout<<"studentinfo"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"mark:"<<mark<<endl; }
    };
    int main(){
        student s1;
        s1.inputdata();
        s1.displaydata();
    }