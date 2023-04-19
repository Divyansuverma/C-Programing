#include<iostream>
using namespace std;
int main()
{
	int age;
    cout<<"enter the 1st number"<<endl;
	cin>>age;
 //	cout<<"enter the 2nd number"<<endl;	
//	cin>>b;
//	cout<<"enter the 3rd number"<<endl;	
//	cin>>c;
	switch(age)
	{
		case 2:
		cout<<"you can voted";
		break;
		
		case 10:
			cout<<"you can not voted";
			break;
			
			
		 default:
		 cout<<"invailde age";	
	}

//	cout<<"a-b="<< a-b<<endl;
//	cout<<"a*b="<< a*b<<endl;
//	cout<<"a/b="<<(float)a/b;
	return 0;
}