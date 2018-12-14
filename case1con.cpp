#include <iostream>
#include <conio.h>

using namespace std;


int main() {
	
	bool validator = false;
	int exitflag = 0;
	char select;
	do{
	system("cls");
	cout << "MAIN MENU" << endl;
	cout << "1. Input Project Details" << endl
		 << "2. View Projects" << endl
		 << "3. Schedule Projects" << endl
		 << "4. Get a Project" << endl
		 << "5. Exit" << endl;
	
	cin >> select;


	
	switch(select){
		case '1':{
			//createProj();
			break;
		}
		case '2':{
			system("cls");
			validator = false;
			while (validator == false){
				cout << "SELECT OPTION" << endl
				 << "a. One Project" << endl
				 << "b. Completed Projects" << endl
				 << "c. All Projects" << endl
				 << "d. Back" << endl;
			cin >> select;
			if (select == 'a' || select == 'A' || select == 'b' || select == 'B' ||select == 'c' || select == 'C' ||select == 'd' || select == 'D' ){
				validator = true;
				system("cls");
			}
			else{
				system("cls");
				cout << "Invalid Input!! Press any key to continue...." << endl;
				getch();
				system("cls");
			}
			}
			switch(select){

			}
			break;	
			}
		case '3':{
			break;
		}
		case '4':{
			break;
		}
		case '5':{
			exitflag = 1;
			break;
		}
		default:{
			cout << "Invalid Input! Press any key to continue...." << endl;
			getch();
			break;
		}
	}
	
	
	}while (exitflag == 0);
	
	return 0;
}
