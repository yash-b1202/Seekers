#include<bits/stdc++.h>
#include "driver.h"

using namespace std;
void func(){
    Driver driver;
    int ch;
    while(true)
    {
        cout << "\n\n************Contact Management**************\n";
        cout << "1 => Add a contact\n";
        cout<<"2 => Exact search a contact\n";
        cout<<"3 => Prefix search a contact\n";
        cout <<"4 => Display All contact\n";
        cout << "5 => exit\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        if(ch==1)
        {
            driver.add_Contact();
        }
        else if(ch==2)
        {
            int indicator;
            cout<<"1 => first name\n";
            cout<<"2 => last name\n";
            cout<<"3 => phone number\n";
            cout<<"Enter your choice : ";
            cin>>indicator;
            if(!(indicator==1 || indicator==3 || indicator==2 )){
                cout << "Invalid Input\n";
                break;
            }
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
            cout<<"Enter your choice : ";
            cin>>indicator;
            if(!(indicator==1 || indicator==3 || indicator==2 )){
                cout << "Invalid Input\n";
                break;
            }
            string target;
            cout<<"Enter your input to search : ";
            cin>>target;
            driver.pref_search(indicator,target);
        }
        else if(ch==4){
            cout << "\nContact are :\n";
            driver.full_display();
        }
        else if(ch==5)
            break;
        else 
        {
            cout<<"INVALID INPUT !\n\n";
            continue;
        }
    }
}
int main()
{
    func();
}