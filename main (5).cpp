#include <iostream>
using namespace std ;
int main()
{

   int week=3; //بدي يكرر الاسابيع 3 مرات
   int day=7;
   for(int i=1;i<=week;i++)
   {
        cout<<"week :"<<i<<endl; //مشان يحط الايام 
        for(int x=1;x<=day;x++)
        cout<<"     day"<<x<<endl;
   }

    return 0;
}