/*program for print following pattern
1 2 3 4 5 4 3 2 1
1 2 3 4   4 3 2 1 
1 2 3       3 2 1
1 2           2 1
1               1
  
 


*/
#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;
    cout<<"enter the number: "<<endl;
    cin>>n;

    for(i=n;i>=1;i--)   //no of rows/lines
    {
        for(j=1;j<=i;j++)  //it will iterates till i 
        {
            cout<<j<<" ";
        }

        for(k=n-i;k>=1;k--)  //5>1 4>1 3>1 2>1 
        {
            cout<<"  ";
        }
         for(k=n-i;k>=1;k--)  //5>1 4>1 3>1 2>1 
        {
            cout<<"  ";
        }
        
    
        for(j=i;j>=1;j--)  //it will iterates till i 
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    
}