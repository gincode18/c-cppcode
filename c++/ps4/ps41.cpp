#include<iostream>
using namespace std;


int main()
{int n;
cin>>n;
string a[n],x;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
cin>>x;
int sum=1;
for (int i = 1; i < n; i++)
{
    sum=sum*i;
}
cout<<sum;

    
    return 0;
}