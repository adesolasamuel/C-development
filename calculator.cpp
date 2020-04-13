#include <iostream>
#include <string>
   using namespace std;

int main()

{
/*MY ARRAY*/
 	string x;
 	string add = "addition";
 	float a , b , c , d , e , f , g , h;
     cout<<"CALCULATOR \n"<<endl;
     
     cout<<"Enter the basic arithmetic operation you want to perform"<<endl;
     cin>>x;
     
     if(x==addition){
     	cout<<"Enter the first number \n";
     	cin>>a;
     	cout<<"Enter the second number \n";
     	cin>>b;
     	
     		float sum=a+b;
     	
     	cout<<"Sum is "<<sum;
     	}
     
}