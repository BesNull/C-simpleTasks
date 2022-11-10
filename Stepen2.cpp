////Найти наименьшую степень 2, равную или больше суммы чисел в заданном массиве.
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//TimeComplexity O(n + log(ExpCnt)) или мэйби n+log(n)
 
int step2(int nums[], int n)
{
    int tempsum, sum=0; 
    int i;
    for (i=0; i<n; i++ ){  //O(n)
        sum=sum + nums[i]; //складываем элементы
    }
   
    i=0;
    tempsum=abs(sum); //Берем модуль числа
    sum=tempsum;
    cout<<tempsum<<endl;
    while(sum){    //O(ExpCnt)
        sum/=2;  //Делим полученную сумму пока она не станет равной 1 и получаем степень двойки
        i++;
        if (sum==1) break;
    }
    cout<<i<<endl;
    if (tempsum==pow(2, i))
        return i;
        else
        return i+1; //Если не равно то прибавляем к степени единицу чтобы выполнялось условие задания
    
}


int main()
{
    
    int nums[]={4, 1, 1, 1, 1, -16};
    
    int numsLen = (sizeof(nums)/sizeof(*nums));
    cout<<step2(nums, numsLen)<<endl;

}
