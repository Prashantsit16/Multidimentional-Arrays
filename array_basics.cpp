//Prashant
//23070123102
//array input and printing 
#include<iostream>
using namespace std;
int main()
{
    int i,j,a,b;
    cout<<"Enter number of rows: ";
    cin>>a;
    cout<<"Enter number of columns: ";
    cin>>b;
    int arr[a][b];//declaring array of sf size of rows=a and columns=b
    cout<<"Enter the elements of array: "<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<"Enter element "<<i<<j<<":  ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"The matrix is :"<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    }
