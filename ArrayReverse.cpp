#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of elements you want in array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The reversed array is: ";
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }    
return 0;
}