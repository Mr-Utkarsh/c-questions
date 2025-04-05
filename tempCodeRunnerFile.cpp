int a = 0;
    int b = 1,c,n;
    cout<<"enter any no = "<<endl;
    cin>>n;
    cout<<a<<"\t"<<b<<"\t";
    for (int i = 1; i <=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"\t";
    }