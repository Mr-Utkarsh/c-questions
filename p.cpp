#include <iostream>
using namespace std;
// int a = 900; //global variable

int main() {
    // int a,b;
    // int c = a-b;
    // cout<<"enter a : ";
    // cin>>a;
    // cout<<"enter b : ";
    // cin>>b;
    
    // (c>0)?cout<<(c):cout<<(b-a);


    //     int a,b,c;
    //     cout<<"enter 1 no\n";
    //     cin>>a;
    //     cout<<"enter 2 no\n";
    //     cin>>b;
    //     c = (a>b)?a-b:b-a;
    //     cout<<c;

    // int pass1 ;
    // cin>>pass1;
    // int pass2;
    // cin>>pass2;
    // (pass1==pass2)?cout<<("valid"):cout<<"invalid";    

    //even odd program
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // (num % 2 == 0) ? cout << "Even" : cout << "Odd";

    //program of finding larger number
    // int num1, num2;
    // cout << "Enter first number: ";
    // cin >> num1;
    // cout << "Enter second number: ";
    // cin >> num2;
    // (num1 > num2) ? cout << num1 : cout << num2;

    //scope resolution operator
    //:- it is used to access the global variable

    // {
    //     int a = 100; //local variable
    //     cout << a << endl;
    //     cout << ::a << endl;// scope resolution operator
    // }

    //referrence variable example
//     int a = 10;//a is a normal variable
//     int &b = a;//b is a referrence variable
//     cout << "a = " <<a << endl; //value of a
//     cout << "b = " <<b << endl;//value of b
//     cout<<"address of a = "<<&a<<endl;//address of a
//     cout<<"address of b = "<<&b<<endl;//address of b
//     b = 90;
//     cout << "a = " <<a << endl;
//     cout << "b = " <<b << endl;

    //pointer variable example
//   int a = 300;
//   int b = 900;
//   int *p;// * is pointer
//   p=&a;//reference (& is address/reference)
//   cout<< "address of a = "<<&a<<endl;
//   cout<<*p;//dereference

   //Q1 write a program to print,subtract,multiply,modulus% & division/ of two numbers;
//    int a,b;
//    cout<<"enter 1 no = " <<endl;
//    cin>>a;
//     cout<<"enter 2 no = "<<endl;
//     cin>>b;
//     cout<<"the ans of a+b is = "<<a+b<<endl;
//     cout<<"the ans of a-b is = "<<a-b<<endl;
//     cout<<"the ans of a*b is = "<<a*b<<endl;
//     cout<<"the ans of a/b is = "<<a/b<<endl;
//     cout<<"the ans of a%b is = "<<a%b<<endl;


   //Q2 write a program to find area of circle;
    //  int r;
    //     cout<<"enter the radius of circle = "<<endl;
    //     cin>>r;
    //     cout<<"the area of circle is = "<<3.14*r*r<<endl;


   //Q3 write a program to find simple interest;
    // int p,t,r;
    // cout<<"enter the principle amount = "<<endl;
    // cin>>p;
    // cout<<"enter the time = "<<endl;
    // cin>>t;
    // cout<<"enter the rate = "<<endl;
    // cin>>r;
    // cout<<"the simple interest is = "<<(p*t*r)/100<<endl;


   //Q4 write a program to convert celsius to fahrenheit;
    // float c;
    // cout<<"enter the celsius = "<<endl;
    // cin>>c;
    // cout<<"the fahrenheit is = "<<(c*9/5)+32<<endl;


   //Q5 write a program to find square root of a number;
    // int a;
    // cout<<"enter the number = "<<endl;
    // cin>>a;
    // cout<<"the square root of a number is = "<<a*a<<endl;


   //Q6 write a program to find cube of a number;
    // int a;
    // cout<<"enter the number = "<<endl;
    // cin>>a;
    // cout<<"the cube of a number is = "<<a*a*a<<endl;

    //Control flow statement:- it includes 3 types of statements:-
    //1 conditional statement-- there are 4 types:- single,BI,Ladder,nested
    //2 transfer statement--there are 3 types:- goto,Break,continue,switch
    //3 looping statement-there are 3 types:- do while,while,for

    //1 conditional statement :-
    //1 single conditional statement :- singal candition will be executed if and only if the condition is true otherwise it will not be executed
    // syntax:- if(condition/expression)
    // {
    // statement
    // }
    // int age;
    // cout<<"enter the age = "<<endl;
    // cin>>age;
    // if(age>=18)
    // {
    //     cout<<"you are eligible for voting"<<endl;
    // }


    //condition with expression example
    // int a = 1;
    // if (a,a--,a++)
    // {
    //     cout<<"true"<<endl;
    // }

    //2 BI conditional statement:- two conditions will be executed if and only if the condition is true otherwise it will not be executed
    // syntax:- if(condition/expression)
    // {
    // statement
    // }
    // else
    // {
    // statement
    // }

    //Q7 write a program to find out the given no is even or odd;
    // int a;
    // cout<<"enter the number = "<<endl;
    // cin>>a;
    // if(a%2==0)
    // {
    //     cout<<"the given no is even"<<endl;
    // }
    // else
    // {
    //     cout<<"the given no is odd"<<endl;
    // }    

    //Q8 write a program to find out the large no between 2 integers;
    // int a,b;
    // cout<<"enter 1 no = "<<endl;
    // cin>>a;
    // cout<<"enter 2 no = "<<endl;
    // cin>>b;
    // if(a>b)
    // {
    //     cout<<"the large no is = "<<a<<endl;
    // }
    // else
    // {
    //     cout<<"the large no is = "<<b<<endl;
    // }

    //Q9 write a program to find out the given character is vowel or consonant;
    // char ch;
    // cout<<"enter the character = "<<endl;
    // cin>>ch;
    // if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' )
    // {
    //     cout<<"the given character is vowel"<<endl;
    // }
    // else
    // {
    //     cout<<"the given character is consonant"<<endl;
    // }

   //3 nested example //Q10   4 digit password program 
//     int pw,otp;
//     int opw = 2025;
//     int ootp = 1000;
//    cout<<"create password = ";
//    cin>>pw;
   
//     if (pw>=1000 && pw<=9999)
//     {
       
//       if (pw==opw)
//         {
//             cout<<"enter the otp = ";
//             cin>>otp;
//             if (otp==ootp)
//             {
//                cout<<"welcome";
//             }
//             else
//             {
//                 cout<<"invalid otp";
//             }
            
//         }
//         else
//         {
//             cout<<"wrong password";
//         }  
//     }
//     else
//     {
//         cout<<"invalid";
//     }
    
    //ladder conditional 
    // syntax:-
    // if (condition)
    // {
    //     /* code */
    // }
    // else if (condition)
    // {
    //     /* code */
    // }
    // else
    // {
    //     /* code */
    // }
    
    //Q check btwn 3 numbers either one is larger or all are same?
    
    // int a,b,c;
    // cout<<"enter the value of a = ";
    // cin>>a;
    // cout<<"enter the value of b = ";
    // cin>>b;
    // cout<<"enter the value of c = ";
    // cin>>c;
    // if (a==b && b==c)
    // {
    //     cout<<"all are same";
    // }
    // else if (a>b && a>c)
    // {
    //     cout<<"a is larger";
    // }
    // else if (b>a && b>c)
    // {
    //     cout<<"b is larger";
    // }
    // else if (a == b && a > c)
    // {
    //     cout<<"a and b are larger";
    // }
    // else if (a == c && a > b)
    // {
    //     cout<<"a and c are larger";
    // }
    // else if (b == c && b > a)
    // {
    //     cout<<"b and c are larger";
    // }
    // else
    // {
    //     cout<<"c is larger";
    // }

    //Q11 write a program to find out the percentage between 3 subjects, per subject have total of 100 marks and total marks of all subject is 300 and give the grades according to the percentage for 1st division 60% and above,2nd division 50% to 59% ,3rd division 35% and above and fail below 33% in any subject.

    // float p, c, m, per;
    // cout << "Enter the marks of Physics: ";
    // cin >> p;
    // cout << "Enter the marks of Chemistry: ";
    // cin >> c;
    // cout << "Enter the marks of Maths: ";
    // cin >> m;

    // if ((p >= 0 && p <= 100) && (c >= 0 && c <= 100) && (m >= 0 && m <= 100)) {
    //     per = (p + c + m) / 3;
    //     cout << "Percentage: " << per << "%" << endl;

    //     if (p < 33 || c < 33 || m < 33) {
    //         cout << "Fail" << endl;
    //     } else if (per >= 60) {
    //         cout << "1st Division" << endl;
    //     } else if (per >= 50) {
    //         cout << "2nd Division" << endl;
    //     } else if (per >= 35) {
    //         cout << "3rd Division" << endl;
    //     } else {
    //         cout << "Fail" << endl;
    //     }
    // } else {
    //     cout << "Invalid marks entered. Marks should be between 0 and 100." << endl;
    // }

//Q Write a program to find out the given year is leap year or not ?

    //  int year;
    //     cout<<"enter the year = ";
    //     cin>>year;
    //     if (year%4==0)
    //     {
    //         if (year%100==0)
    //         {
    //             if (year%400==0)
    //             {
    //                 cout<<"leap year";
    //             }
    //             else
    //             {
    //                 cout<<"not a leap year";
    //             }
    //         }
    //         else
    //         {
    //             cout<<"leap year";
    //         }
    //     }
    //     else
    //     {
    //         cout<<"not a leap year";
        // }

//Q currency Denomination program when u have the notes of 5,10,20,50,100,500 but u should use the minimum no of notes to get the given amount and output should be for example 5*0,10*0,20*0,50*0,100*0,500*0 you should display every quaniity of notes in the format of the given example.

// int amount;
//     cout<<"enter the amount = ";
//     cin>>amount;
//     if (amount%5==0)
//     {
//         int a = amount/500;
//         amount = amount%500;
//         int b = amount/100;
//         amount = amount%100;
//         int c = amount/50;
//         amount = amount%50;
//         int d = amount/20;
//         amount = amount%20;
//         int e = amount/10;
//         amount = amount%10;
//         int f = amount/5;
//         cout<<"500*"<<a<<endl;
//         cout<<"100*"<<b<<endl;
//         cout<<"50*"<<c<<endl;
//         cout<<"20*"<<d<<endl;
//         cout<<"10*"<<e<<endl;
//         cout<<"5*"<<f<<endl;
//     }
//     else
//     {
//         cout<<"invalid amount";
//     }

//here ends conditional statement------------------

//2 transfer statement
//1 goto statement:- it is used to transfer the control of the program to the specified label.
//  cout<<"hello"<<endl;
//     goto end;
//     cout<<"world"<<endl;
//     end:
//     cout<<"bye"<<endl;

//Q write a program to print the table of any number using goto statement;

    // int a;
    // int i=1;
    // cout<<"enter the number = ";
    // cin>>a;
    // start:
    // cout<<a<<"*"<<i<<"="<<a*i<<endl;
    // i++;
    // if (i<=10)
    // {
    //     goto start;
    // }
    // else
    // {
    //     cout<<"end";
    // }

// Q write a program to print the descending of a number upto 1 using goto statement;

    // int a;
    // cout<<"enter the number = ";
    // cin>>a;
    // start:
    // cout<<a<<endl;
    // a--;
    // if (a>=1)
    // {
    //     goto start;
    // }
    // else
    // {
    //     cout<<"end";
    // }

}
