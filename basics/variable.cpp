#include    <iostream>
using namespace std;    
int main() {
    int age=25;
    char grade='A';
    float price=100.5;
    bool isSafe=false;
    cout<<"My age is "<<age<<endl;
    cout<<sizeof(age)<<endl;
    cout<<"My grade is "<<grade<<endl;
    cout<<sizeof(grade)<<endl;
    cout<<"My price is "<<price<<endl;
    cout<<sizeof(price)<<endl;
    cout<<"Is it safe?= "<<isSafe<<endl;
//n true=1 false=0
    cout<<sizeof(isSafe)<<endl;
    return 0;
} 