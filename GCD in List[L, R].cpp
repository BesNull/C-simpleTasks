//Новый код
// Example program
#include <iostream>
#include <string>
using namespace std;

//O(n*log(ModuloOperatesCounter))

int Fgcd1(int x, int y)
{
    int tempx;
    
    //
    while (y){ //пока y не равен 0 
        
        tempx=y; //записываем во временную переменную y
        y=x%y; // Считаем остаток от деления x на y
        x=tempx; // Переносим предыдущий y в x и начинаем заново
        
    }
    return tempx;
}

int Fmgcd (int nums[], int n){
    
    int t=nums[0];
    int i=0;
   
    for (i=1; i<n; i++){
        
            t = Fgcd1(t, nums[i]);
            
    }
    return t;
}


int main()
{
    
    int nums[]={45, 21, 91};
    
    int numsLen = (sizeof(nums)/sizeof(*nums));

    cout<<"MGCD = "<< Fmgcd(nums,numsLen)<<"\n";

}







// Старый код
#include <iostream>
#include <string>
using namespace std;

int gcd;


int Fgcd1(int x, int y)
{
    int tempx;
    while (y){
        tempx=y;
        y=x%y;
        }
        return tempx;
}

int Fgcd (int x,int y){
     for (int i=1; i<=x && i<=y; i++){
        if (x%i==0 && y%i==0){
            gcd=i;
            }
        }
        return gcd;
}

int Fmgcd (int nums[]){
    int t=nums[0];
    int i=0;
    while (nums[i]!=NULL) {
          i++;  
        }
   int n=i;
   //cout<<"\n"<<"N = "<<n<<"\n";
    for (i=1; i<n; i++)
        {
            t = Fgcd1(t, nums[i]);
           // cout<< t<< "+\n";
        }
        return t;
    }


int main()
{
    //1st
    int x, y;
    int nums[]={45, 15, 90};
    cin>>x;
    cin>>y;
    cout<<"Molodez\n";    
    cout<<"GCD = "<<Fgcd(x, y)<<"\n";
   
    cout<<"MGCD = "<< Fmgcd(nums)<<"\n";

}
