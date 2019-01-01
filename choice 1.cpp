#include <iostream>
#include <fstream>
using namespace std;

#define DOCUMENT 50

// choice 1
class Generate
{
private:
   static int ID;
public:
   static int nextID();
};

int Generate::ID = 0;
int Generate::nextID() {
	return ID++;
}

int size, priority;
char title[DOCUMENT];

int main(){
	ofstream choice1;
	std::cout << "ID Number: " << Generate::nextID() << '\n';
	cout << "Enter Title of the document: " <<endl;
	cin.getline(title, DOCUMENT);
	cout << "Enter the Number of Pages: " <<endl;
	cin >> size;
	while (size < 50 || size > 500) {
		cout << "Invalid input" <<endl;
		cin >> size;
	}
	cout << "Enter the number of Priority: " <<endl;
	cin >> priority;
	while (priority < 1 || priority > 5) {
		cout << "Invalid input" <<endl;
		cin >> priority;
	}
	choice1.open("example.txt");
	choice1 << Generate::nextID() << ", " << title << ", " << priority << ", " << size;
	choice1.close();
	return 0;
}

