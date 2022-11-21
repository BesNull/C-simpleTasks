// https://www.wolframalpha.com/input?i=sum+1%2F2%5En%2C+n+%3D+1+to+infinity


#include <iostream>

using namespace std;

int main()
{
   double sum, step;
   sum=0;
   step=0.5;
   int i=0;
   while (sum<1)
   {
       sum = sum + step;
       printf("SUM=%.20f",sum );
       step = step / 2;
       printf(" STEP=%f\n", step);
       i++;       
   }
   
   printf("SUM=%f, STEP=%f\n", sum, step);
}
