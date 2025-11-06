#include<iostream>
using namespace std;
inline int add(int a, int b)
{
    return a+b;
}
int main()
{
    int sum1 =add(58,34);
    cout<<"sum of 58 and 34 is:"<<sum1<<endl;
    int sum2 =add(48,24);
    cout<<"sum of 48 and 24 is:"<<sum2<<endl;
    return 0;
}



