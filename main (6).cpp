#include <iostream>
using namespace std ;
int main()
//برنامج يجمع الارقام الموجبة لو دخل رقم سالب اللوب ينتهي يعني البرنامج
//والرقم السالب لن ينجمع مع باقي الارقام
//يعني بضل ادخل ارقام لحد رقم سالب
//يعني البرنامج يخلص لما اندخل قيمه سالبه لما تنتهي يجمع كل الارقام
{
   
 int number=0;//المستخدم رح يدخلو
 int sum=0;//الارقام الي رح تنجمع
 cout<<"Enter the number\n";
 cin>>number;
 
 while(number>=0)
 {
      sum=sum+number;
      cout<<"Enter the number\n";
      cin>>number;
 }
     cout<<"the sum of the number is "<<sum<<endl;
    return 0;
}