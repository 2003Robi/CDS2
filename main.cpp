#include <iostream>

using namespace std;

int main()
{
    int n,m[10][10],i,j,x;
    cout<<"n=";
    cin>>n;
    for(i=1 ; i<=n ; i++)
    {
        x=i;
        for(j=1 ; j<=n ; j++)
        {
            m[i][j]=x;
            if(j<n+1-i)
                x++;
            else
                x--;
        }
    }
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
