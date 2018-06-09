#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,temp=0,count=0,ans=0,res;
    cin>>a>>b;
    count=a;
    while(a>=b)
    {
        if(a%b==0)
        {
            a=a/b;
            count+=a;
        }
        if(a%b!=0)
        {
            ans=a/b;
             count+=ans;
            temp=ans*b;
            res=a-temp;
            a=ans+res;

        }

    }
        cout<<count<<endl;
}
