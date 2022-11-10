//сортировка по сумме цифр числа
// Example program
#include <iostream>
#include <string>
using namespace std;

int gcd;
int nums[]={45, 21, 89, 55, 11, 345};

int sumdigits(int digits){    //log(digitLenght)
    int sum=0;
    while (digits){
        sum = sum + digits % 10;
        digits = digits / 10;
    }
    return sum;
}

void quicksort (int firstEl, int lastEl)  
{
  int res;
  int i=0;
  int l = firstEl , r = lastEl;
  int pp = sumdigits(nums[(l + r) / 2]); // Опорным элементом для примера возьмём средний
  
  while (l <= r)
  {
    while (sumdigits(nums[l]) < pp)
      l++;
    while (sumdigits(nums[r]) > pp)
      r--;
    if (l <= r)
      swap (nums[l++], nums[r--]);
  }
 
  if (firstEl < r)
    quicksort (firstEl, r);
  if (lastEl > l)
    quicksort (l, lastEl);

}
   

void sortsum (int nums[], int n){ //O(n^2*log(DigitsEl1)*log(DigitsEl2))
    
    int temp;
    
    int el1, el2;
    for(int i=0; i<n; i++){
        el1 = sumdigits(nums[i]);
        for(int j=i+1; j<n; j++)
        {
            el2 = sumdigits(nums[j]);
            if (el1>el2){
                
                temp=nums[i];
                nums[i]=nums[j]; 
                nums[j]=temp;
    
                el1 = el2;
            } 
        }
    }
}

   // cout<< res<<"\n";
   // cout<<nums[5];
    

int main()
{
    //1st
   // int x, y;
   int i=0;

   //cout<<*end;

   //так можно записать указатель в другую переменную и вывести число
   //int *ptr=begin;
   //cout<<*begin;
   
    //Номер последнего элемента массива
    while(nums[i])   {i++;}  //O(n)
    int n=i-1;

   
   //Быстрая сортировка
    quicksort(0, n);
    i=0;
    
    cout<<"Быстрая сортировка"<<endl;
    while(nums[i])                  
    {
        cout<<nums[i]<<" ";
        i++;
    }
    cout<<endl;
   
   //сортировка пузырьком
    int nums1[]={45, 21, 89, 55, 11, 345};
    
    cout<<"Сортировка пузырьком"<<endl;  
    sortsum(nums1, n+1); //здесь n+1 т.к. нужно кол-во элементов массива
        //итого сложность O(n+n^2*log(DigitsEl1)*log(DigitsEl2))
    i=0;
    
   while(nums1[i])
    {
       cout<<nums1[i]<<" ";
       i++;
       if (i>n) break;
    }
  

}
