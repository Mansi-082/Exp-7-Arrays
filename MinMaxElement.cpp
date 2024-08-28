//Mansi Kulkarni
//ENTC B1
//23070123082

#include<iostream>
using namespace std;
int main(){
    int n, i, max, min;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for( i = 0; i<n ; i++){
        cin >> a[i];
    }
    max=a[0];
    min=a[0];
    for( i = 0; i<n ; i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"The maximum element of array is: "<<max<<endl;
    cout<<"The minimum element of array is: "<<min;   
    return 0;
}
