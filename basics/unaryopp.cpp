#include    <iostream>
using namespace std;                        
int main() {
    int a=10;
    int b=++a; // pre-increment
    cout<<a<<endl; //11
    cout<<b<<endl; //11
    int c=a++; // post-increment
    cout<<a<<endl; //12 
    cout<<c<<endl; //11
}