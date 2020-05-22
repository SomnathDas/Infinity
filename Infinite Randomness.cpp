#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void Infinite();

int main() {

	string answ;


	std::cout << "Not so random numbers will start generating...\ntype [y] to continue or [n] to exit" << std::endl;
	std::cin >> answ;

 	if(answ == "y" || answ == "Y") {
 		Infinite();

 	} else if(answ == "n" || answ == "N") {
 		return 0;

 	} else {
 		std::cout << "Wrong Input, Please restart the program" << std::endl;
 		return 0;
 	}


	return 0;
}

void Infinite() {

	srand(time(0));

	for(int i = 0; i < (time(0)); i++) {

		cout << rand() << endl;
	}


}