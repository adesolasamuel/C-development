//Database Management System 1.0
//Author: Adesola Samuel, Dec 2020

//The system take input inform of streams of data and store it in a file and these data can be collected later for use



#include <iostream>
#include <fstream>


void get_member(std::string);
void add_member(std::string);

int main(){

	int option;
	std::string name;

	std::cout << "\t\tWELCOME TO THE FAMILY REPOSITORY\nSELECT AN OPTION TO CONTINUE\n";
	std::cout <<"1. View member's Info\n2. Add member's Info\n";
	std::cin >> option;

	switch(option){
	case 1:

		std::cout << "Enter the member's name: ";
		std::cin >> name;


		name = name.append(".txt");
		get_member(name);
		break;

	case 2:
		std::cout << "Enter the name of the Family member: ";
		std::cin >> name;

		name = name.append(".txt");
		add_member(name);

		break;

	default:
		std::cout << "Please enter the correct option\n";
	}



	return 0;
}

void get_member(std::string member_name){
	std::fstream getFile;

	getFile.open(member_name.c_str(), std::ios::in);

	if(getFile.is_open()){

		std::string info;

		while(!getFile.eof()){

		std::getline(getFile, info);
		std::cout << info << std::endl;

		}


		getFile.close();
	}
	else{
		std::cout << "Can't Open " << member_name << " File" << std::endl;
	}

}

void add_member(std::string member_name){

	std::fstream addFile;
	addFile.open(member_name.c_str(), std::ios::out);

	if(addFile.is_open()){
		std::string Fname, Lname, gender, location;
		std::cout << "First Name: ";
		std::cin >> Fname;
		std::cout << "Last Name: ";
		std::cin >> Lname;
		std::cout << "Gender: ";
		std::cin >> gender;
		std::cout << "Location: ";
		std::cin >> location;

		addFile << "Name: " << Fname + " " + Lname << std::endl;
		addFile << "Gender: " << gender << std::endl;
		addFile << "Location: " << location << std::endl;

		addFile.flush();
		addFile.close();
	}
	else{
		std::cout << "Cannot Create File for: " << member_name << std::endl;
	}

}
