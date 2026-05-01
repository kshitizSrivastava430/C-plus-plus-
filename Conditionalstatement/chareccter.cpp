#include    <iostream>
using namespace std;
int main()  {
    char ch;
    cout<<"enter a character:"<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"it is an uppercase letter"<<endl;
    }else if(ch>=97 && ch<=122){
        cout<<"it is a lowercase letter"<<endl;
    }else{
        cout<<"it is not a letter"<<endl;
    }
}