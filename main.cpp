#include<iostream>
using namespace std;
int main()
{
cout<< "\n welcome to the math calculator"<<endl;
cou<<"add"<<endl;
cout<<"sub"<<endl;
cout<<"div"<<endl;
cout<<"multi"<<endl;

cout<<"Enter your required function"<<endl;
int request;
int num1,num2;
cin>>request;

switch(request){
case 1:
cout<<"\n you have choosen add function"<<endl;
cout<<"enter first number"  ;
cin>>num1;
cout<<"enter second number";
cin>>num2;
cout<<num1<<"+"<<num2<<"is"<<add(num1,num2)<<endl;

case 2:
cout<<"\n you hace choosen sub function"<<endl;
cout<<"enter first number";
cin>>num1;
cout<<"enter second number";
cin>>num2;
cout<<num1<<"+"<<num2<<"is"<<sub(num1,num2)<<endl;

case 3:
cout<<"\n you have choosen multi function"<<endl;
cout<<"enter first number";
cin>>num1;
cout<<"enter second number";
cin>>num2;
cout<<num1<<"+"<<num2<<"is"<<multi(num1,num2)<<endl;

case 4:
cout<<"\n you have choosen div function"<<endl;
cout<<"enter first number";
cin>>num1;
cout<<"enter second number";
cin>>num2;
cout<<num1<<"+"<<num2<<"is"<<div(num1,num2)<<endl;

default :
cout<<"invalid option"<<endl;
}
return 0;
}



