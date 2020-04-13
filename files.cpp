#include <iostream>
#include <fstream>
using namespace std;



void file(){

	ofstream myfile("myname.txt");
	
		if(myfile.is_open())	{
	cout << "My file is open";
	myfile << "Adesola Samuel Dayo \n";
	
	myfile.close();
		}
		else{
		cout << "File has not been opened";	
			}
}

void tester(){
	
	int nums[6];
cout << "Enter three numbers \n";
	cin >> nums[0] >> nums[1]  >> nums[2] ;
	
	nums[3] = 0;
	nums[4] = nums[0] + nums[1] + nums[2]; 	nums[5] = nums[3] / nums[4];
	
	cout << nums[5];
	
//	int divideby = nums[0];
	
	}
	
	int main(){
tester();

	
		
		}