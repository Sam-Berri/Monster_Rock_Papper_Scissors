// Pokemon rock paper sicors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include  <cstdlib> 
#include <stdlib.h>
#include <time.h>


int main() {




	std::cout << "Rock Paper siccors Pokemon addition! \n\n";


	//problem- the computer dosesnt randomise each time you play again 

	std::vector <std::string> Pokemon{ "Charmander", "Squirtle", "Bulbasaur" };

	srand(time(NULL));
	int computer = rand() % 3 + 1;
	int user;
	int computer_hp = 1;
	int user_hp = 1;
	int play_again = 1;



	while (play_again == 1) {




		std::cout << "To select Pokemon input the corrisponding number\n\n";
		std::cout << "1)Charmander\n2)Squirtle\n3)Bulbasaur\n\n";

		std::cin >> user;



		if (user == 1 && computer == 2) {

			std::cout << "Charmander uses Flamethrower!\n";
			std::cout << "Squirtle uses Hydropump!\n";
			std::cout << "You lose..\n\n";
			user_hp--;
		}
		else if (user == 2 && computer == 2) {
			std::cout << "Squirtle uses Hydropump!\n";
			std::cout << "Squirtle uses Hydropump!\n";
			std::cout << "its a tie! choose again\n\n";
		}
		else if (user == 3 && computer == 2) {
			std::cout << "Bulbasuar uses Solar Beam!\n";
			std::cout << "Squirtle uses Hydropump!\n";
			std::cout << "You win!\n\n";
			computer--;
		}
		else if (user == 1 && computer == 3) {
			std::cout << "Charmander uses Flamethrower!\n";
			std::cout << "Bulbasuar uses Solar Beam!\n";
			std::cout << "You win!\n\n\n";
			computer--;
		}
		else if (user == 2 && computer == 3) {
			std::cout << "Squirtle uses Hydropump!\n";
			std::cout << "Bulbasuar uses Solar Beam!\n";
			std::cout << "You lose..\n\n";
			user_hp--;
		}
		else if (user == 3 && computer == 3) {
			std::cout << "Bulbasuar uses Solar Beam!\n";
			std::cout << "Bulbasuar uses Solar Beam!\n";
			std::cout << "its a tie! choose again\n\n";
		}
		else if (user == 1 && computer == 1) {
			std::cout << "Charmander uses Flamethrower!\n";
			std::cout << "Charmander uses Flamethrower!\n";
			std::cout << "its a tie! choose again\n\n";
		}
		else if (user == 2 && computer == 1) {
			std::cout << "Squirtle uses Hydropump!\n";
			std::cout << "Charmander uses Flamethrower!\n";
			std::cout << "You win!\n\n";
			computer--;
		}
		else if (user == 3 && computer == 1) {
			std::cout << "Bulbasuar uses Solar Beam!\n";
			std::cout << "Charmander uses Flamethrower!\n";
			std::cout << "You lose..\n\n";
			user_hp--;
		}
		else {
			std::cout << "Invalid input.. you bannana\n\n";
		}

		std::cout << "Would you like to play again?\n";
		std::cout << "1)Yes\n2)No\n";
		std::cin >> play_again;
	}

}


















