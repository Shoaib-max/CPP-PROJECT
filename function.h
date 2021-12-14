#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;


char s_name[20];
char e_name[20];
int roll;
int id;

class get_data {
	protected	:
		char s_name[20];
		char e_name[20];
		int roll;
		int id;

	public :	
		void get_student_data() {   // write mode ...........
			ofstream s_file;
			s_file.open("Student_record.dat");
			cout<<"Student Name : ";
			cin.getline(s_name,100);
			s_file<<s_name<<endl;

			cout<<"Student Roll Number :";
			cin>>roll;
			s_file<<roll<<endl;

			s_file.close();
		}

		void get_employee_data() {
			ofstream e_file;
			e_file.open("Employee_record.dat");      // writing mode .........
			cout<<"Employee Name : ";
			cin>>e_name;
			e_file<<e_name;

			cout<<"Employee ID : ";
			cin>>id;
			e_file<<id<<endl;

			e_file.close();
		}
};

class out_data : public get_data {
	public	:
	void out_student_data() {
		ifstream out_s_file;
		out_s_file.open("Student_record.dat");
		out_s_file>>s_name;
		cout<<"Name is  : "<<s_name<<endl;
		out_s_file>>roll;
		cout<<"roll is : "<<roll<<endl;
		out_s_file.close();
	}

	void out_employee_data() {
		ifstream out_e_file;
		out_e_file.open("Employee_record.dat");
		out_e_file>>e_name;
		cout<<"Name : "<<e_name<<endl;
		out_e_file>>id;
		cout<<"ID is  : "<<id;
		out_e_file.close();
	}
};