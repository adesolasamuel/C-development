#include <iostream>
#include <string>
 
    using namespace std;


/*

copyright ADESOLA SAMUEL 2020

DATE COMPLETED 06/03/2020

	Exercise  20:
	
	  A serial transmission line  can  transmit 960  characters a second. Write a  program that will calculate how long it  will take to send  a  file, given the  file's size.  Try it  on  a  400MB (419,430,400  byte) file. Use appropriate  units. (A  400MB file  takes days.)   */
	
   //	cout << sizeof(char) << "byte \n";
	
	// therefore one character = 1 byte
	// this class will perform the main calculation
	
	
	class fileCalc{
	public:
	     fileCalc(){
	     	
	     	  cout << "  A serial transmission line  can  transmit 960  characters a second \n\n\n";
	     	  
	     	float a = fileSize;
	     	int b = fileSizeCali;
	     	float c = totalBytes;
	     	float d = totalSecs;
	     	
	     }
	 
	// this member allows the user to enter the fileSize and caliberation  	
	  
		void getFileSize (){
		cout << "HOW LONG WILL IT TAKE  ";	    cin >> fileSize;
		cout << "IN  \n" << "(enter the corresponding number from the list below) \n";
		cout << "1. BYTES \n" <<"2. KB \n" << "3. MB \n" << "4. GB \n";
		cin >> fileSizeCali;
		
		switch(fileSizeCali){
		case 1:
	
		cout << fileSize << " BYTES";
		break;
			
		case 2:
		cout << fileSize << " KB ";
		break;
		
		case 3:
		cout << fileSize << " MB ";
		break;
		
		case 4:
		cout << fileSize << " GB ";
		break;
			}
        cout << " TO BE TRANSFERED \n";
			}
		
	// this member changes the fileSize to bytes 	
		
		void fileConverter(){
	
			switch(fileSizeCali){
		case 1:
		totalBytes = fileSize;
		break;
		
		case 2:
		totalBytes = fileSize * 1024;
		break;
		
		case 3:
			totalBytes = fileSize * 1024 * 1024;
		break;
		
		case 4:
			totalBytes = fileSize * 1024 * 1024 * 1024;
		break;
			}
			
			}
			
	// this member will conver bytes to seconds
	
		
		void printAnswer(){	
				
				
		switch (fileSizeCali){
			case 1:
	cout << "\n\n IT WILL TAKE " << fileSize << " BYTES" ;
	break;
	
			case 2:
	cout << "\n\n IT WILL TAKE " << fileSize << " KB" ;
	break;
	
			case 3:
	cout << "\n\n IT WILL TAKE " << fileSize << " MB" ;
	break;
	
			case 4:
	cout << "\n\n IT WILL TAKE " << fileSize << " GB  " ;
	break;
	
		}
	
		}		
		
			void numberOfSecs(){
				
				totalSecs = totalBytes/960;
				
				if(totalSecs < 60){
		cout <<endl << totalSecs << " SECONDS TO BE TRANSFERED";
					}
				if(totalSecs > 60){
		cout <<endl << totalSecs/60 << " MINUTES TO BE TRANSFERED";			
					
					
		/*I STOPED IN MINUTES THAT IS THE HIGHEST CALIBERATION US MINUTES, YOU CAN STILL MAKE IT EVELUATE HOURS AND DAYS*/
					}
				}	
				
	protected:	
	
	float fileSize;
	int fileSizeCali;
	float totalBytes;
	float totalSecs;
	
			};
			
// this class will do the final seconds conversions
	
	



	int main(){
		
		fileCalc obj1;
		obj1.getFileSize();
		obj1.fileConverter();
		obj1.printAnswer();
		obj1.numberOfSecs();
		
	
		
	
		
		
		return 0;
		}	
		
/*NOTES

The next thing us to converts the numberOfSecs to minutes and hours


*/