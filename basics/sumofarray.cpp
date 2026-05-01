#include  <iostream>
using namespace std;    
int main()    
{    
    int n, sum = 0, product = 1;   
    cout << "Enter the number of elements: "<<endl;   
    cin >> n;    
    int arr[n];    
    cout << "Enter the elements: ";    
    for (int i = 0; i < n; i++)
    {    
        cin >> arr[i];    
        sum = sum+arr[i]; 
        product *= arr[i];   
    }    
    cout << "The sum of the array is: " << sum << endl; 
    cout << "The product of the array is: " << product << endl;
    return 0;    
}