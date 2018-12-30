#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Project{
	public:
	int id,priority,size;
	string title;
	string tempid;
	string tempprio;
	string tempsize;
		//title is already a string
};

class Node : public Project{
	Node *next;
	Node *prev;
};

int main(){
	Node *pNode,*nNode;
	Node node;
	ifstream list;
	list.open("primer.txt");
	
	//Search one Project - by ID
	int idsearch,searchagain;
	bool found = false;
	do{
	system("cls");
	cout << "Enter ID to search: ";
	cin >> idsearch;
	
	
	while(!getline(list,node.tempid,',').eof()){
		getline(list,node.title,',');
		getline(list,node.tempprio,',');
		getline(list,node.tempsize);
		node.id = atoi(node.tempid.c_str());
		node.priority = atoi(node.tempprio.c_str());
		node.size = atoi(node.tempsize.c_str());
		
		if(node.id == idsearch){
			found = true;
			break;
		}
	}
	
	if(found == false){
		cout << "NO MATCHING ID FOUND." << endl;
	}
	
	else{
		cout << "ID: "<< node.id << endl << "Title: " << node.title << endl << "Priority: " << node.priority << endl << "Size: " << node.size <<" pages" << endl << "\n***SEARCH SUCESSFULLY COMPLETED***" << endl << endl << endl;
	}
	do{
	cout << "Search Another ID?\nPress 1 to Search Again\nPress 2 to go back to Main Menu" << endl;
	cin >> searchagain;
	if(searchagain != 1 && searchagain != 2){
		cout << "\nInvalid Input Press any Key" << endl;
		getch();
		system("cls");
	}
	}while(searchagain != 1 && searchagain != 2);
}while(searchagain == 1);
return 0;
}
