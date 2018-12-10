#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a,b,c;
cout<<"======Mencari Bilangan Terkecil=======";
cout<<endl;
cout<<"Masukan bilangan pertama :";
cin>>a ;
cout<<"Masukan bilangna kedua :";
cin>>b ;
cout<<"Masukan bilangan ketiga :";
cin>>b ;
cout<<endl;
/*percabangan*/
if(a<b)
{
    cout<< a <<" Adalah bilangan terkecil";
    cout<<endl;
}
else if(b<c)
{
    cout<< b <<" Adalah bilangan terkecil ";
    cout<<endl;
}
    else
    {
        cout<< c <<" Adalah bilangan terkecil ";
        cout<<endl;
    }
return 0;
}
