#include<iostream>
using namespace std;
int main()
{
cout<<" welcome to the math calculator"<<endl;
cout<<" ------------------------------"<<endl;
cout<<" 1 sum"<<endl;
cout<<" 2 sub"<<endl;
cout<<" 3 divs"<<endl;
cout<<" 4 multi"<<endl;
    
    float num1,num2;
    float sum,sub,multi,divs;
    int request;
    

cout<<"Enter your required function"<<endl;
    cin>>request;
    

switch(request){
case 1:
cout<<" you have choosen sum function"<<endl;
cout<<"enter first number"  ;
cin>>num1;
cout<<"enter second number";
cin>>num2;
        sum =num1+num2;
        cout<<"sum of both numbet is "<<sum<<endl;

    break;

case 2:
cout<<" you have choosen sub function"<<endl;
cout<<"enter first number";
cin>>num1;
cout<<"enter second number";
cin>>num2;
        sub =num1-num2;
        cout<<"sub of both number is "<<sub<<endl;

    break;

case 3:
cout<<" you have choosen multi function"<<endl;
cout<<"enter first number";
cin>>num1;
cout<<"enter second number";
cin>>num2;
        multi =num1*num2;
        cout<<"multi of both number is "<<multi<<endl;

    break;

case 4:
cout<<" you have choosen divs function"<<endl;
cout<<"enter first number";
cin>>num1;
cout<<"enter second number";
cin>>num2;
        divs =num1/num2;
        cout<<"divs of both number is "<<divs<<endl;

    break;

default :
cout<<"invalid option please enter the number between (1-4)"<<endl;
        break;
        
}
return 0;
}



