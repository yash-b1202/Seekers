#include <bits/stdc++.h>
#include "contact.h"

using namespace std;

class Driver{
    private:
    vector<Contact> Contact_list;
    
    public:
    void full_search(int indicator, string target){

        vector<Contact>result;
        for(int i=0; i<Contact_list.size();i++){
            if(indicator==1){
                if(Contact_list[i].f_name==target){
                    result.push_back(Contact_list[i]);
                }
            }
            else if(indicator==2){
                if(Contact_list[i].l_name==target){
                    result.push_back(Contact_list[i]);
                }
            }
            else{
                if(Contact_list[i].phone_no==target){
                    result.push_back(Contact_list[i]);
                }
            }
        }
        display(result);
    }

    void pref_search(int indicator, string target){

        vector<Contact>result;
        for(int i=0; i<Contact_list.size();i++){

            if(indicator==1){
                if(Contact_list[i].f_name.size()<target.size()){
                    continue;
                }
                else{
                    if(Contact_list[i].f_name.substr(0,target.size())==target){
                        result.push_back(Contact_list[i]);
                    }
                }
            }
            else if(indicator==2){
                if(Contact_list[i].l_name.size()<target.size()){
                    continue;
                }
                else{
                    if(Contact_list[i].l_name.substr(0,target.size())==target){
                        result.push_back(Contact_list[i]);
                    }
                }
            }
            else{
                if(Contact_list[i].phone_no.size()<target.size()){
                    continue;
                }
                else{
                    if(Contact_list[i].phone_no.substr(0,target.size())==target){
                        result.push_back(Contact_list[i]);
                    }
                }
            }
        }
        display(result);
    }

    void add_Contact(){

        string last_name,first_name,phone;
        cout<<"Enter first name : ";
        cin>>first_name;

        cout<<"Enter last name : ";
        cin>>last_name;

        cout<<"Enter phone number : ";
        cin>>phone;

        transform(first_name.begin(), first_name.end(), first_name.begin(), ::tolower);
        transform(last_name.begin(), last_name.end(), last_name.begin(), ::tolower);

        for(int i=0;i<Contact_list.size();i++){
            if(first_name==Contact_list[i].f_name && last_name==Contact_list[i].l_name && phone==Contact_list[i].phone_no){
                cout<<"Duplicate Entry ! \n";
                return;
            }
        }
        Contact_list.push_back(Contact(phone, first_name, last_name));
    }

    void full_display(){
        display(Contact_list);
    }

    void display(vector<Contact>result){

        for(int i=0;i<result.size();i++){
            cout<<result[i].f_name<<" "<<result[i].l_name<<" "<<result[i].phone_no<<"\n";
        }
    }

};