#include <iostream>
using namespace std;
class prime
{
  public:
  void calculate()
   {
   int n, i, m=0, flag=0;
   cout << "Enter the Number to check Prime: ";
   cin >> n;
   m=n/2;
   for(i = 2; i <= m; i++)
   {
       if(n % i == 0)
       {
           cout<<"Number is not Prime."<<endl;
           flag=1;
           break;
       }
   }
   if (flag==0)
       cout << "Number is Prime."<<endl;
   }
};
int main()
{
    prime obj;
    obj.calculate();
    return 0;
}

