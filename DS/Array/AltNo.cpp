
#include<iostream>

using namespace std;  
int main()  
{  
    int n;  
    cout<<"Enter the size of the array:";  
    cin>>n;  
    int arr[n];  
    cout<<"\nEnter the array elements:";  
    for(int i = 0; i < n; i++)  
    {  
        cin>>arr[i];  
    }  
      
    cout<<"\nThe alternate elements of the array are:\n";  
    for(int i = 0; i < n; i = i+2)  
    {  
        cout<<arr[i]<<" ";  
    }  
}  
