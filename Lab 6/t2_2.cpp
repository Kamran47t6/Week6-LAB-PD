#include<iostream>
using namespace std;
bool greaterNumber(int a,int b,int c);
int main(){
      int a,b,c;
      
      int result;
      cout<<"Enter first number :";
      cin>>a;
      cout<<"Enter second number :";
      cin>>b;
      cout<<"Enter third number :";
      cin>>c;
      result=greaterNumber(a,b,c);
      if(result==1){
            cout<<"yes ";
      }
      else{
            cout<<"No ";
      }
     

}
bool greaterNumber(int a,int b,int c){
      bool same=false;
      if(a==b && b==c && c==a){
            same=true;
      }
      return same;
}