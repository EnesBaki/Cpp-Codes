#include <iostream>

using namespace std;

int main()

{
	string islem;
	int a,b;
	
	cout<<"islem yapacaginiz sayilari giriniz"<<endl;
	cin>>a;
	cin>>b;
	
	
	cout<<"islem no giriniz"<<endl;


cout<<"1-Toplama islemi"<<endl;
cout<<"2-Cikarma islemi"<<endl;
cout<<"3-Carpma islemi"<<endl;
cout<<"4-Bolme islemi"<<endl;

cin>>islem;


if(islem=="1")

{cout<<a+b;
}

else if(islem=="2")
{
     cout<<a-b; }
     
     else if(islem=="3")
    {
	 cout<<a*b; }
     
    else if(islem=="4")
{
     cout<<a/b; }
     
     else{cout<<"hatali giris";
	 }
     
     
     
     

	
	
	}
