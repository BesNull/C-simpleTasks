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
      //Пояснение
       sum = sum + step;   // это будет стремиться к 1 и в итоге дойдет, раз цикл рабочий и вывод будет 1.000000
       printf("SUM=%.20f",sum );
       step = step / 2; // это будет стремиться к 0, но там в итоге будет очень маленькое число, а со стандартным print%f у нас после запятой всего 6 цифр будет на выводе, поэтому будет 0.000000
       printf(" STEP=%f\n", step);
       i++;       
   }
   
   printf("SUM=%f, STEP=%f\n", sum, step);
}
