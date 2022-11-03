#include <bits/stdc++.h>
#include "contact.h"

using namespace std;

class Driver{
    private:
    vector<contact> contact_list;
    
    public:
    vector<contact> full_search(int indicator, string target){

        vector<contact>result;
        for(int i=0; i<contact_list.size();i++){
            if(indicator==1){
                if(contact_list[i].f_name==target){
                    result.push_back(contact_list[i]);
                }
            }
            else if(indicator==2){
                if(contact_list[i].l_name==target){
                    result.push_back(contact_list[i]);
                }
            }
            else{
                if(contact_list[i].phone_no==target){
                    result.push_back(contact_list[i]);
                }
            }
        }
        return result;
    }

    vector<contact> pref_search(int indicator, string target){

        vector<contact>result;
        for(int i=0; i<contact_list.size();i++){

            if(indicator==1){
                if(contact_list[i].f_name.size()<target.size()){
                    continue;
                }
                else{
                    if(contact_list[i].f_name.substr(0,target.size())==target){
                        result.push_back(contact_list[i]);
                    }
                }
            }
            else if(indicator==2){
                if(contact_list[i].l_name.size()<target.size()){
                    continue;
                }
                else{
                    if(contact_list[i].l_name.substr(0,target.size())==target){
                        result.push_back(contact_list[i]);
                    }
                }
            }
            else{
                if(contact_list[i].phone_no.size()<target.size()){
                    continue;
                }
                else{
                    if(contact_list[i].phone_no.substr(0,target.size())==target){
                        result.push_back(contact_list[i]);
                    }
                }
            }
        }
        return result;
    }

    void add_contact(){

        string last_name,first_name,phone;
        cout<<"Enter first name : ";
        cin>>first_name;

        cout<<"Enter last name : ";
        cin>>last_name;

        cout<<"Enter phone number : ";
        cin>>phone;

        contact_list.push_back(contact(phone, first_name, last_name));
    }

    void full_display(){
        display(contact_list);
    }

    void display(vector<contact>result){

        for(int i=0;i<result.size();i++){
            cout<<result[i].f_name<<" "<<result[i].l_name<<" "<<result[i].phone_no<<"\n";
        }
    }

};