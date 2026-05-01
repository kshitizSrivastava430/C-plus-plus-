#include    <iostream>  
using namespace std;    
int main(){
    int count=1;
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int sum=0;
    while(count<=n){
                if(count==6){
            break; 
        }
        sum=sum+count;
        count++;   
    }
    cout<<sum<<endl;
}