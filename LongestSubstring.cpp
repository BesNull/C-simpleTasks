#include <iostream>

using namespace std;

int main()
{
    char a, b;
    string s1, s2, stemp;
    s1 = "aaaabbbbbvvvxvxxzzzzrgdsbbbdddvcc";
    
    int l1 = s1.length();
    cout<<"all substrings: "<<endl;
    for(int i=0; i<=s1.length(); i++){
     
        if (s1[i]!=s1[i+1] )
        {
            for (i; i<s1.length(); i++)
            {
                s2+=s1[i];
                
                if (s1[i+1]==s1[i+2])
                break;
            }
            
            cout<<s2<<endl;
            
            if (stemp.length()<s2.length())
            stemp=s2;
            
            s2="";
        }

    }
       cout<<"Longest substring: "<<stemp;

}
