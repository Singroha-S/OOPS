#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    string name ;
    int age;
    bool gender;

    void printfn(){
        cout<<"enter name:"<<endl;
        cout<<name;
        cout<<"enter age:"<<endl;
        cout<<age;
        cout<<"enter gender:"<<endl;
        cout<<gender;
    }
};

int main()
{
    student s[3];
    for(int i=0;i<3;i++){
            cout<<"enter name:"<<endl;
            cin>>s[i].name;
     cout<<"enter age:"<<endl;
            cin>>s[i].age;
             cout<<"enter gender:"<<endl;
            cin>>s[i].gender;
    }
    for(int i=0;i<3;i++){
        s[i].printfn();
    }

    return 0;
}
