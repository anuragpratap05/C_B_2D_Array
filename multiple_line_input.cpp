# C_B_2D_Array
#include<bits/stdc++.h>
using namespace std;



int main()
{
    char a[1000][1000];
    
    int n;
    cin>>n;
    
    cin.get();
    
    for(int i=0;i<n;i++)
    {
        cin.getline(a[i],1000);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
   
}
