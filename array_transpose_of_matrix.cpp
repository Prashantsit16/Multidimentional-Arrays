//Prashant
//23070123102
// transpose of matrix
#include<iostream>
using namespace std;
int main()
{
    int i,j,a,b;
    cout<<"Enter the rows and columns matrix for matrix: ";
    cin>>a>>b;
    int arr[a][b],s=0,s1=0,trans[b][a];
   
   cout<<"Enter the values of matrix: "<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
           cout<<"Enter element "<<i<<j<<":  ";
           cin>>arr[i][j];
           trans[j][i]=arr[i][j];
        }
    }
    cout<<"The original matrix is: "<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;}
        cout<<"transposed matrix is: "<<endl;
        for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;}
return 0;

}
