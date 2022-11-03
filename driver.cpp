#include <bits/stdc++.h>
#include<contact.h>

using namespace std;

class Driver{
    private: 
    vector<contact> contact_list;

    int get_contact_list_size(){
        return contact_list.size();
    }

    public:
    Driver(){

    }

    void add_contact(){

        string last_name,first_name,phone;
        cout<<"Enter first name : ";
        cin>>first_name;

        cout<<"Enter last name : ";
        cin>>last_name;

        cout<<"Enter phone number : ";
        cin>>phone;
        
        contact new_contact(phone, first_name, last_name);

        contact_list.push_back(new_contact);
    }

};