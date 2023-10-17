/*#include<iostream>
using namespace std;
int main(){
	int a ;
	cout << " Choose 1 for Punjab\nChoose 2 for Sindh\nChoose 3 for KPK\nChoose 4 for Balochistan\n";
	cin >> a;
	switch(a)
	{
	
		case(1):
			cout <<" Population of Punjab is 127.5 million"<<endl;
			break;
		case(2):
			cout << " Population of Sindh is 57.3 million"<<endl;
			break;
		case(3):
			cout << " Population of KPK is 40.85 million"<<endl;
			break;
		case(4):
			cout << " Population of Balochistan is 27.1 million"<<endl;
			break;
		default:
			cout << "Invalid Character"<<endl;
			}
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
	cout << "Enter an alphabet"<<endl;
	char alphabet;
	cin >> alphabet;
	switch(alphabet){
		case 'a':
			cout << "Alphabet is vowel";
			break;
		case 'e':
			cout << "Alphabet is vowel";
			break;
		case 'i':
			cout << "Alphabet is vowel";
			break;
		case 'o':
			cout << "Alphabet is vowel";
			break;
		case 'u':
			cout << "Alphabet is vowel";
			break;
		default:
			cout << "Alphabet is consonant"<<endl;
		
	}
return 0;
}*/
/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number"<<endl;
	int num, a;
	cin >> num;
		num>0 ? a=1 : a=0;
	num<0 ? a=2 : a = a;

	switch(a){
		case 0:
			cout << "The given number is zero"<<endl;
		break;
		case 1:
			cout << "The given number is positive";
			break;
		case 2:
			cout << "The given number is negative";
			break;
		
	}
return 0;
}
*/

/*#include <iostream>
using namespace std;
int main(){
	char x,a;
	cout<<"Enter T for teenager otherwise person is adult ";
	cin>>x;
	if (x == 'T')
	{
		cout<<"Person is a teenager"<<endl;
		cout<<"Enter C for child otherwise teenager is not child ";
		cin>>a;
		if(a=='C')
		{
			cout<<"This teenager is child";
			
		}
		else
		{
				cout<<"This teenager is not child";	
		}
	}
	else
	{
		cout<<"This person is adult";
	}
	return 0;
}*/
/*
#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers: ";
	cin>>a;
	cin>>b;
	cin>>c;
	if (a>b&&a>c)
	{
	cout<<"This is greatest number :"<<a<<endl;
		if(b>c)
		{
			cout<<"The second  number : " << b<<endl;
			cout <<" The third number : "<< c <<endl;}
		else if (c>b){
			cout << "The second number :" << c<< endl;
			cout << "The third number :"<< b << endl;}
		}
	else if (b>a&&b>c)
	{cout<<"This is greatest number :"<<b<<endl;
		if(a>c)
		{
			cout<<"The second  number : " << a<<endl;
			cout <<" The third number : "<< c <<endl;}
		else if (c>a){
			cout << "The second number :" << c<< endl;
			cout << "The third number :"<< a << endl;}
		}
	else if (c>b&&c>a)
		{cout<<"This is greatest number :"<<c<<endl;
			if(b>a)
			{
				cout<<"The second  number : " << b<<endl;
				cout <<" The third number : "<< a <<endl;}
			else if (a>c){
				cout << "The second number :" << a<< endl;
				cout << "The third number :"<< c << endl;
			}
				}
	return 0;
}
 */





