#include <bits/stdc++.h>
using namespace std;

class A{
private:
    int a=1,b=2;
public:
    string s="Naveen";
     void out(){
     cout<<"yo aagya"<<endl;}
};

class B:public A{
private:
    char c='f';
public:
    string s1="Singroha";
    void print(){
        cout<<s1;
    }
};

int main()
{
    A obj;
    cout<<obj.s<<endl;
   B obj1;
   obj1.out();
   //cout<<obj1.s1<<endl;
   obj1.print();

    return 0;
}
