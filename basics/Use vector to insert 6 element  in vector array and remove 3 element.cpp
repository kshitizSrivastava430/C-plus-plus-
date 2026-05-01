#include <iostream>
#include <vector>
#include <array>
#include <algorithm> 
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.erase(remove(v.begin(), v.end(), 2), v.end());
    for (int x : v) cout << x << " ";
    return 0;
}

using namespace std;
int main()    
{    
    vector<int> arr;    
    int n, element;    
    cout << "Enter the number of elements to insert: ";    
    cin >> n;    
    cout << "Enter the elements: ";    
    for (int i = 0; i < n; i++) {    
        cin >> element;    
        arr.push_back(element); 
    }    
    cout << "The elements in the vector are: ";    
    for (int i = 0; i < arr.size(); i++) {    
        cout << arr[i] << " "; 
    }    
    cout << endl;    
    if (arr.size() >= 3) {
        arr.erase(arr.begin(), arr.begin() + 3); 
        cout << "After removing 3 elements, the remaining elements are: ";    
        for (int i = 0; i < arr.size(); i++) {    
            cout << arr[i] << " "; 
        }    
        cout << endl;
    } else {
        cout << "Not enough elements to remove." << endl;
    }
    
    return 0;    
}