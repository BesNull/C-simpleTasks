#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// Time Complexity //O(n*logn)
 
 int nums[]={4,7,3,5,3,3,11,0};

int max1=nums[0];
int max2=nums[0];

//второй способ
void TwoSmallestNums(int arrlen)
{ 
  for(int i=0;i<=arrlen-1;i++)
  {
    if(nums[i]<max1)
    { 
      max2=max1;
      max1=nums[i];
    }
    else
    {
     if (nums[i]<max2) max2=nums[i];
    }
  }
}


//first
void quicksort (int firstEl, int lastEl)  
{
  int res;
  int i=0;
  int l = firstEl , r = lastEl; //Индексы правого и левогго конца массива
  int pp = nums[(l + r) / 2]; // Опорный элемент от которого будем считывать данные
  
  while (l <= r)
  {
    while (nums[l] < pp) //Пока значение элемента с левого конца меньше опорного, сдвигаем указатель левого конца вправо
      l++;
    while (nums[r] > pp) //Аналогично
      r--;
    if (l <= r) //Если левый указатель меньше либо равен правому то меняем местами соседние элементы массива
      swap (nums[l++], nums[r--]);
  }
 
  if (firstEl < r)  //проверяем, если индекс первого элемента массива меньше сдвинутого индекса,
  //то рекурсивно вызываем функцию, подставляю эти значения в качестве индексов начала и конца.
    quicksort (firstEl, r);
  if (lastEl > l) //Аналоггично
    quicksort (l, lastEl);
}


int main()
{
    int numsLen = (sizeof(nums)/sizeof(*nums));

    quicksort(0, numsLen-1);
    
    int i=0;
    
    while(i<numsLen){       
        cout<<nums[i]<<" ";
        i++;
    }
    
    
    TwoSmallestNums(numsLen);
    
    int minSum=nums[0]+nums[1];
    cout<<endl;
    cout<<"Two smallest numbers "<<max1<<" "<<max2<<endl;
    cout<<"Sum = "<<max1+max2;
   // cout<<"MGCD = "<< Fmgcd(nums,numsLen)<<"\n";
}
