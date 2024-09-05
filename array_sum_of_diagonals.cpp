//Prashant
//23070123102
// sum of diagonals of matrix
#include<iostream>
using namespace std;
int main()
{
    int i,j,a,b;
    cout<<"Enter the rows and columns matrix for matrix: ";
    cin>>a>>b;
    int arr[a][b],s=0,s1=0;
    
    if(a==b)//checking for the matrix is square or not 
    {
        
   cout<<"Enter the values of matrix: "<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
           cout<<"Enter element "<<i<<j<<":  ";
           cin>>arr[i][j];
           if(i==j)
           {
              s=s+arr[i][j];
           }
           /**else if((i+j)==(a-1))
           {
            s1=s1+arr[i][j];
           }**/
           
        }
    }
    cout<<"The sum of diagnol of-1 is: "<<s<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if((i+j)==(a-1))
            {
                s1=s1+arr[i][j];
            }
        }
    }
    cout<<"The sum of diagnol-2 is: "<<s1;
    }
    else{
        cout<<"Error! not a square matrix";
    }
    return 0;

}
