// Accept a value and add or subtract to the stored value of 1000
// The user want to do continues transaction until stated to close.
// Exit should exist in both initial and end
// stored = 1000

#include <iostream>

int main() {
	int value, stored = 1000;
	int choice;
	char EndTrail;
	char ContinueChoice = 'Y';
	
		do
		{
			std::cout << "Enter a value: ";
			std::cin >> value;
			
			
			std::cout <<"=======================\n"
			  <<" \t-MENU-\t\n"
			  <<"=======================\n"
			  <<" [1] Add\n"
			  <<" [2] Subtract\n"
			  <<" [3] Exit\n"
			  <<"-----------------------\n"
			  <<"Enter choice: ";
			std::cin >> choice;
	
			switch(choice) {
			case 1:
				stored += value;
				break;
			case 2:
				stored -= value;
				break;
			case 3:
				exit (0);
			default:
				std::cout << "Invalid choice. please choice valid option\n";
				break;
			}		
	std::cout << "The stored value is " << stored << "\n";
		
		std::cout << "Do you still wish to continue? [Y/N]\n";
	std::cin >> ContinueChoice;
	}
	 while (ContinueChoice == 'y' || ContinueChoice == 'Y');
	
	return 0;
}
