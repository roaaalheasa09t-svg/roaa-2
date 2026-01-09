
#include <iostream>
using namespace std ;
int main()
{
    char oper;//للعمليه الحسابية
     float num1;  // floatلانه ممكن المستخدم يضع ارقام كسرية
     float num2;//للارقام
    cout<<"Enter an operator(+,-,/,*) :" ;
    cin>>oper;
    cout<<"Enter tow number\n";
    cin>>num1;
    cin >>num2;
     
    switch(oper)
    {
    case '+': //وضعناعلامه التنصيص لانه + تعتبر حرف
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<"\n";
    break;
    
    case '-':
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    break;

    case '*':
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    break;

    case '/':
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    break;
    default :
    cout<<"Error";
    }
    return 0;
}