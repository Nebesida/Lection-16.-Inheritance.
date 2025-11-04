#include "CPP.h"
#include "Java.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	Human* ivan = new Human("Ivan", "Ivanov", 20, 185, 78);
	Human* anna = new Human("Anna");

	Topic* sep = new Topic("system programming", "basic constructions", *ivan, 10, 95, 342);
	CPP* oct = new CPP("system programming", "OOP", *ivan, 15, 5, 223, 21);
	Java* nov = new Java("development of software modules", "web development", *anna, 10, 3, 216, "Spring");

	++*nov;
	if (*oct > *nov) cout << oct->getLectorName().getName() << " больше работает" << endl;
	else if (*oct < *nov) cout << nov->getLectorName().getName() << " больше работает" << endl;
	else cout << oct->getLectorName().getName() << " и " << nov->getLectorName().getName() << " работают одинаково." << endl;

	delete sep; delete oct; delete nov;
	delete ivan; delete anna;

	return 0;
}