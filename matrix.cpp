#include <iostream>

	using namespace std;
	
	int main(){
		
	/*Program to calculate the determinant of  two by two or three by three matrix*/	
		
	int a11 , a12 , a13 , a21, a22 , a23 , a31 , a32 , a33 , m , n;
	
	int det1 , det2;
	
	
	
	
		cout<<"DETERMINANT CALCULATOR \n\n";
		cout <<"Number of row = ";
		cin>>m;
		
		cout<<"Number of column =  ";
		cin>>n;
		
	if( m==2 && n==2){
		cout<<"a11 =";
		cin >>a11;
		
		cout<<"a12 =";
		cin >>a12;
		
		cout<<"a21 =";
		cin >>a21;
		
		cout<<"a22 =";
		cin >>a22;
		
		det1 = (a11*a22)-(a12*a21);
		
		cout<<"Determinant ="<<det1;
		
		}
		
		
			if( m==3 && n==3){
		cout<<"a11 =";
		cin >>a11;
		
		cout<<"a12 =";
		cin >>a12;
		
		cout<<"a13 =";
		cin >>a13;
		
		cout<<"a21 =";
		cin >>a21;
		
		cout<<"a22 =";
		cin >>a22;
		
		cout<<"a23 =";
		cin >>a23;
		
		cout<<"a31 =";
		cin >>a31;
		
		cout<<"a32 =";
		cin >>a32;
		
		cout<<"a33 =";
		cin >>a33;
		
		det2 = ((a11*a22*a33)+(a12*a23*a31)+(a13*a21*a32)) - ((a31*a22*a13)+(a32*a23*a11)+(a33*a21*a12));
		
		cout<<"Determinant ="<<det2;
		
		}
		
		
		return 0;
		
		
		}