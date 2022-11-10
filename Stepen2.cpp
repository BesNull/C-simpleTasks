////Найти наименьшую степень 2, равную или больше суммы чисел в заданном массиве.
//можно без взятия модуля, но тогда добавить условие при отрицательно сумме и возвратить степень 0
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
        sum/=2;  //Делим полученную сумму пока она не станет равной 1  и получаем степень двойки
        i++; 
        if (sum==1) break;
    }
    cout<<i<<endl;
    if (tempsum==pow(2, i))
        return pow(2, i);
        else
        return pow(2, i+1); //Если не равно то прибавляем к степени единицу чтобы выполнялось условие задания
    
}


int main()
{
    
    int nums[]={4, 1, 1, 1, 2, -16};
    
    int numsLen = (sizeof(nums)/sizeof(*nums));
    int Stepen2 = step2(nums, numsLen);
    cout<<"Stepen2 = "<<Stepen2;
    

}
