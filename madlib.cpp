#include<iostream>
using namespace std;
int main()
{
    string colour,plurals,celebrity;
    cout<<"enter a colour ";
    getline(cin,colour);
    cout<<"enter a plural ";
    getline(cin,plurals);
    cout<<"enter a celebrity ";
    getline(cin,celebrity);

    cout<<"roses are "<<colour<<endl;
    cout<<plurals<<" are blue"<<endl;
    cout<<"i love "<<celebrity<<endl;
    return 0;
}