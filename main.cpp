#include<iostream>
#include<conio.h>
#include<fstream>
#include"function.h"

using namespace std;

//*********************************************************************************
//						STUDENT CLASS
//*********************************************************************************

/*class STUDENT {
	public:
	void get_student_data();



};


//*********************************************************************************
//						EMPLOYEE CLASS
//*********************************************************************************

class EMPLOYEE {
	public	:
		void get_employee_data();

};


//*********************************************************************************
//						DATA BASE DETALE CLASS
//*********************************************************************************


class DETALE {
	public	:
		void out_student_data();
		void out_employee_data();

};

*/
int main() {
	int option;
	do {
		cout<<"\n\n\t\t\t ****************     Wellcome     ****************\n";
		cout<<"\n\t\t\t\t\t1. STUDENT ";
		cout<<"\n\t\t\t\t\t2. EMPLOYEE ";
		cout<<"\n\t\t\t\t\t4. DETALE ";
		cout<<"\n\t\t\t\t\t5. EXIT ";
		cout<<"\n\t\t\t\t\tPress any option (1 to 5) : ";
		cin>>option;
		switch(option) {
			case 1 : 
				{
					get_data s_obj;
					s_obj.get_student_data();
				}
				break;
			case 2 :
				{
					get_data e_obj;
					e_obj.get_employee_data();
				}
				break;
			case 3 :
				{
					out_data d_obj;
					d_obj.out_student_data();
					d_obj.out_employee_data();
				}
				break;
			case 4 : exit(0);
				default : cout<<"";
		}
	}while(option!=4);



}