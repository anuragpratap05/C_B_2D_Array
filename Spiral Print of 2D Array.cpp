#include<bits/stdc++.h>
using namespace std;



int main()
{
    int a[1000][1000];
    int r,c;
    cin>>r>>c;
    int val=1;
    for(int i=0;i<r;i++)
    {
        
        for(int j=0;j<c;j++)
        {
            a[i][j]=val;
            val++;
        }
    }
    
    for(int i=0;i<r;i++)
    {
        
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int sc=0;
    int sr=0;
    int ec=c-1;
    int er=r-1;
    
    while(sr<=er and sr<=ec)
    {
        for(int i=sc;i<=ec;i++)
        {
            cout<<a[sr][i]<<" ";
        }
        sr++;
        for(int j=sr;j<=er;j++)
        {
            cout<<a[j][ec]<<" ";
        }
        ec--;
        if(er>sr)
        {
        for(int k=ec;k>=sc;k--)
        {
            cout<<a[er][k]<<" ";
        }
        }
        er--;
        if(ec>sc)
        {
        for(int l=er;l>=sr;l--)
        {
            cout<<a[l][sc]<<" ";
        }
        }
        sc++;
    }


   
}
