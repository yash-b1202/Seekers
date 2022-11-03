#include<bits/stdc++.h>
#include "driver.h"
using namespace std;
void func(){
    Driver driver;
    int ch;
    while(true)
    {
        cout<<"1 => add a contact\n";
        cout<<"2 => exact search a contact\n";
        cout<<"3 => prefix search a contact\n";
        cout<<"4 => exit\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        if(ch==1)
        {
            driver.add_contact();
        }
        else if(ch==2)
        {
            int indicator;
            cout<<"1 => first name\n";
            cout<<"2 => last name\n";
            cout<<"3 => phone number\n";
            cin>>indicator;
            string target;
            cout<<"Enter your input to search : ";
            cin>>target;
            driver.full_search(indicator,target);
        }
        else if(ch==3)
        {
            int indicator;
            cout<<"1 => first name\n";
            cout<<"2 => last name\n";
            cout<<"3 => phone number\n";
            cin>>indicator;
            string target;
            cout<<"Enter your input to search : ";
            cin>>target;
            driver.pref_search(indicator,target);
        }
        else if(ch==5)
            break;
        else 
        {
            cout<<"INVALID INPUT !\n";
            break;
        }
    }
}
int main()
{
    func();
}