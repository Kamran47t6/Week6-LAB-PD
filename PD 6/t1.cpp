#include<iostream>
using namespace std;
char Day(string temperature,string humidity);
int main(){
    string temperature,humidity,result;;
    cout<<"ENter temperature (warm/cold):";
    cin>>temperature;
    cout<<"ENter humidity (dry/humid):";
    cin>>humidity;
   Day(temperature,humidity);
   
}
char Day(string temperature,string humidity){
    if(temperature=="warm"){
        if(humidity=="dry"){
            cout<<"Play Tennis :";
        }
        else {
            cout<<"Swim :";
        }
    }
    if(temperature=="cold"){
        if(humidity=="dry"){
            cout<<"Play basketball :";
        }
        else {
            cout<<"Watvh TV :";
        }
    }

}