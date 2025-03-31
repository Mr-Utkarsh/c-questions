#include <iostream>
using namespace std;

int main() {

    // prime
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int c=0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                c++;
            }
        }
        if (c==2)
        {
            cout<<i<<"\t";
        }
    }

    

    //factorial

    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int ans=1;
    // for (int i = n; i >=1; i--)
    // {
    //     ans=ans*i;
    // }

    // cout<<ans;



    //fibonaccii


    // int a = 0;
    // int b = 1,c,n;
    // cout<<"enter any no = "<<endl;
    // cin>>n;
    // cout<<a<<"\t"<<b<<"\t";
    // for (int i = 1; i <=n; i++)
    // {
    //     c=a+b;
    //     a=b;
    //     b=c;
    //     cout<<c<<"\t";
    // }

    //multiplication table

    // int n;
    // cout<<"enter any no =  ";
    // cin>>n;
    // for (int i = 1; i<=10; i++)
    // {
    //     cout<<n*i<<endl;
    // }
    
}