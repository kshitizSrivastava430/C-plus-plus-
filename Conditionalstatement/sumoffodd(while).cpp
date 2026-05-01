#include    <iostream>
using namespace std;
int main() {
    int sum=0;
    int n=5;
   int i=0;
while(i<=n){
    i++;
    if(i%2!=0){
        sum=sum+i;
        }
}
    cout<<sum<<endl;
    return 0;
}