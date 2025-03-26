 int n;
    int c = 0,k;
    cout<<"enter any no = "<<endl;
    cin>>n;
    k=n;
    while (n>0)
    {
       c = c*10 + n%10;
       n=n/10; 
    }
    if (c==k)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
    