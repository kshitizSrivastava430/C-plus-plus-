#include <iostream>
using namespace std;    
int main() {
    bool a=true;
    bool b=false;
    cout<<(a && b)<<endl; // false 0
    cout<<(a || b)<<endl; // true 1
    cout<<(!a)<<endl;     // false 0
    cout<<(!b)<<endl;     // true 1
    return 0;
}