#include<iostream>
using namespace std;
int main(){
    int n, i, j, s, c = 0;
    int count=0,flag=0; //variables for not present in array 
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for( i = 0; i<n ; i++){
        cin >> a[i];
        count++;       
    }
    cout << "Enter an element to be searched in an array: ";
    cin >> s;
    for (j= 0 ; j<n; j++){
        if (a[j]==s){
            cout<< "The element "<< s<<" is present at location: "<<j<<endl;
            c++;
            flag=1;
        } 
    }
    //not present in array
    if(flag==0){
        cout<<"The element "<<s<<" is not present in array.";
    } else{
        cout << "The element "<<s<<" occurs "<<c<<" times.";
    }
    return 0;
}