#include<iostream>
#include"ListStaff.h"
// g++ ListStaff.cpp Staff.cpp main.cpp -o demo
using namespace std;
int main(){
    ListStaff* l = new ListStaff();
    l->Input();
    l->Show();

    // cout<<"Nhap ID can tim : ";
    // int IDStaff;
    // cin>>IDStaff;
    // l->Search(IDStaff);
    int k;
    cout<<"IDStaff   : ";
    cin>>k;
    l->Delete_IDStaff(k);
    cout<<"-----Sau khi xoa-------"<<endl;
    l->Show();

    
    
    

}