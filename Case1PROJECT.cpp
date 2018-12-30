#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <cstring>
using namespace std;
#define NAME_LENGTH 50
void createProj();
void viewproj();

//global bois
bool validator = false;
	int exitflag = 0;
	int globalid = 0;
	char select;
	ofstream choice1,idkeeper;
	ifstream choiceone,idreader;
	
	int size, priority;
	string title;
	
class Project{
	public:
	string id;
	string size;
	string priority;
	string title;
};

class Node {
	Node *prev;
	Node *next;
};
	
int main() {
	Project p;
	do{
	system("cls");	
	choiceone.open("projectlist.txt");
	
	if (! choiceone){
		cout << "Note: No Projects Saved" << endl << endl;
		globalid = 0;
	}
	
	else{
		cout << "Project List found." << endl << endl;
		while(getline(choiceone, p.id, ',').eof()){
			getline(choiceone,p.title,',');
			getline(choiceone,p.priority,',');
			getline(choiceone,p.size);
		}
		cout << "Project Count: " << p.id << endl;
		
	}
	
	choiceone.close();
	
	cout << "MAIN MENU" << endl
		 << "1. Input Project Details" << endl
		 << "2. View Projects" << endl
		 << "3. Schedule Projects" << endl
		 << "4. Get a Project" << endl
		 << "5. Exit" << endl;
	
	select = getch();


	
	switch(select){
		case '1':{
				createProj();
				break;
		}
		case '2':{
			viewproj();
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

void createProj(){
			
				system("cls");
				
				globalid++;
				cout << "ID Number: " << globalid << endl;
				cout << "Enter the Number of Pages (50 - 500): " <<endl;
				cin >> size;
				while (size < 50 || size > 500) {
					cout << "Invalid input" <<endl;
					cin >> size;
				}
				
				
				cout << "Enter the number of Priority (1-5): " <<endl;
				cin >> priority;
				while (priority < 1 || priority > 5) {
					cout << "Invalid input" <<endl;
				}
				
				cout << "Enter Title of the document: " ;
				getline(cin, title);
				
				choice1.open("projectlist.txt");
				choice1 << choice1.eof();
				choice1 << globalid << "," << title << "," << priority << "," << size << endl;
				choice1.close();
}


void viewproj(){
	
			system("cls");
			validator = false;
			while (validator == false){
				cout << "SELECT OPTION" << endl
				 << "a. One Project" << endl
				 << "b. Completed Projects" << endl
				 << "c. All Projects" << endl
				 << "d. Back" << endl;
			select = getch();	
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
}
