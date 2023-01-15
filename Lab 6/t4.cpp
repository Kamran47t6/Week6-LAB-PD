#include <iostream>
using namespace std;
float discount(string day,string month,float total_amount);
int main(){
    string day,month;;
    float total_amount,discountp;
    cout<<"Enter day :";
    cin>>day;
    cout<<"Enter month :";
    cin>>month;
    cout<<"Enter total amount : ";
    cin>>total_amount;
    discountp=discount(day,month,total_amount);
    cout<<discountp;
}
float discount(string day,string month,float total_amount){
    float result;
    if(day=="Sunday" && (month=="October") || (month=="March") || (month=="August")){
        result=total_amount-(total_amount/100)*10;
        return result;
    }
    if(day=="Monday" && (month=="November") || (month=="December")){
        result=total_amount-(total_amount/100)*5;
        return result;
    }
    else{
        return total_amount;
    }
}
